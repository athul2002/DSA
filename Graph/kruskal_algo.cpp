#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>rank,parent;
    public:
    int res=0;
    DisjointSet(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)
        parent[i]=i;
    }
    int findParent(int node)
    {
        if(parent[node]==node)
        {
            return node;
        }
        return parent[node]=findParent(parent[node]);
    }
    void UnionByRank(int u,int v)
    {
        int ulp_u=findParent(u);
        int ulp_v=findParent(v);
        if(ulp_u==ulp_v)
        {
            return;
        }
        else if(rank[ulp_u]>rank[ulp_v])
        {
            parent[ulp_v]=ulp_u;
        }
        else if(rank[ulp_u]<rank[ulp_v])
        {
            parent[ulp_u]=ulp_v;
        }
        else
        {
            parent[ulp_u]=ulp_v;
            rank[ulp_v]++;
        }
    }
};

class Solution{
public:
int spanningTree(int V,vector<vector<int>> adj[])
{
    int ans=0;
    vector<pair<int,pair<int,int>>>edges;
    for(int i=0;i<V;i++)
    {
        for(auto it:adj[i])
        {
            int wt=it[1];
            int adjNode=it[0];
            int node=i;
            edges.push_back({wt,{node,adjNode}});
        }
    }

    sort(edges.begin(),edges.end());
    DisjointSet ds(V);
    for(auto it:edges)
    {
        int wt=it.first;
        int u=it.second.first;
        int v= it.second.second;
        if(ds.findParent(u)!=ds.findParent(v))
        {
            ans+=wt;
            ds.UnionByRank(u,v);
        }
    }
    return ans;
}
};
int main() {

    int V = 5;
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    vector<vector<int>> adj[V];
    for (auto it : edges) {
        vector<int> tmp(2);
        tmp[0] = it[1];
        tmp[1] = it[2];
        adj[it[0]].push_back(tmp);

        tmp[0] = it[0];
        tmp[1] = it[2];
        adj[it[1]].push_back(tmp);
    }

    Solution obj;
    int mstWt = obj.spanningTree(V, adj);
    cout << "The sum of all the edge weights: " << mstWt << endl;
    return 0;
}
