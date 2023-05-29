#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX

vector<int>bellman(int V,vector<vector<int>>&edges,int src)
{
    vector<int>dist(V,INF);
    // fill(dist,dist+V,INF);
    dist[src]=0;
    for(int count=0;count<V-1;count++)
    {
        for(auto x:edges)
        {
            int u=x[0];
            int v=x[1];
            int wt=x[2];

            if(dist[u]!=INF && dist[u]+wt<dist[v])
            {
                dist[v]=dist[u]+wt;
            }
        }
    }
    for(auto x:edges)
    {
            int u=x[0];
            int v=x[1];
            int wt=x[2];

            if(dist[u]!=INF && dist[u]+wt<dist[v])
            {
              return {-1};  // dist[v]=dist[u]+wt;
            }        
    }
    return dist;
}
int main()
{
    vector<vector<int>>edges;
    int V=4;
    edges={{0,1,1},{0,2,2},{1,2,-1},{1,3,4},{2,3,3}};

    vector<int>temp= bellman(4,edges,0);
    for(int i=0;i<temp.size();i++)
    cout<<temp[i]<<" ";
}