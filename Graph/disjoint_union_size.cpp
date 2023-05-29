#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>size,parent;
    public:
    DisjointSet(int n)
    {
        size.resize(n+1,0);
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
    void UnionBySize(int u,int v)
    {
        int ulp_u=findParent(u);
        int ulp_v=findParent(v);

        if(ulp_u==ulp_v)
        return;

        if(size[ulp_u]>size[ulp_v])
        {
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
        else
        {
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
            // rank[ulp_u]++;
        }
    }
};

int main()
{
    DisjointSet ds(7);
    ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);
    if(ds.findParent(3)==ds.findParent(7))
    cout<<"same"<<" ";
    else
    cout<<"diff"<<" ";
    ds.UnionBySize(3,7);
    if(ds.findParent(3)==ds.findParent(7))
    cout<<"same"<<" ";
    else
    cout<<"diff"<<" ";
}