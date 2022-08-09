class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs_fun(int node,vector<int>&dfs,vector<int>&visited,vector<int>adj[])
	{
	    visited[node]=1;
	    for(auto it:adj[node])
	    {
	        if(!visited[it])
	        {
	            dfs_fun(it,dfs,visited,adj);
	        }
	    }
	    dfs.push_back(node);// write this here only
	}
	vector<int> topoSort(int V, vector<int> adj[]) // main fun
	{
	    // code here
	    vector<int>dfs; vector<int>visited(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            dfs_fun(i,dfs,visited,adj);
	        }
	    }
	    reverse(dfs.begin(),dfs.end());//reversing very imp
	    return dfs;
	}
};
