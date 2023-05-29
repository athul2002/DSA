#include<iostream>
#include<vector>
using namespace std;

void adjacency(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v=4;
    vector<int>adj[v];
    adjacency(adj,0,1);
    adjacency(adj,0,2);
    adjacency(adj,1,2);
    adjacency(adj,2,3);
}