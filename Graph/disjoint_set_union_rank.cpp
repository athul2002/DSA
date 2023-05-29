#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>rank,parent;
    public:
    DisjointSet(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)
        parent[i]=i;
    }
    int findParent(int u)
    {
        if(parent[u]==u)
        return u;
        return parent[u]=findParent(parent[u]);
    }
    void UnionByRank(int u,int v)
    {
        int ulp_u=findParent(u);
        int ulp_v=findParent(v);

        if(ulp_u==ulp_v)
        return;

        if(rank[ulp_u]>rank[ulp_v])
        {
            parent[ulp_v]=ulp_u;

        }
        else if (rank[ulp_u]<rank[ulp_v])
        parent[ulp_u]=ulp_v;
        else
        {
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }
};

int main()
{
    DisjointSet ds(7);
    ds.UnionByRank(1,2);
    ds.UnionByRank(2,3);
    ds.UnionByRank(4,5);
    ds.UnionByRank(6,7);
    ds.UnionByRank(5,6);
    if(ds.findParent(3)==ds.findParent(7))
    cout<<"same"<<" ";
    else
    cout<<"diff"<<" ";
    ds.UnionByRank(3,7);
    if(ds.findParent(3)==ds.findParent(7))
    cout<<"same"<<" ";
    else
    cout<<"diff"<<" ";
}