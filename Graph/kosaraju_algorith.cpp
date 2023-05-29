#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int>*adj;
    void DFSUtill(int v,bool visited[]);
    void fillOrder(int v,bool visited[],stack<int>&st);
    public:
    Graph(int V);
    Graph getTranspose();
    void printSCCs();
    void addEdge(int u,int v);
};

Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}
void Graph::addEdge(int u,int v)
{
    adj[u].push_back(v);
}
void Graph::fillOrder(int v,bool visited[],stack<int>&st)
{
    visited[v]=true;
    for(auto x:adj[v])
    {
        if(visited[x]==false)
        fillOrder(x,visited,st);
    }
    st.push(v);
}
void Graph::DFSUtill(int v,bool visited[])
{
    visited[v]=true;
    cout<<v<<" ";
    for(auto x:adj[v])
    {
        if(visited[x]==false)
        DFSUtill(x,visited);
    }
}
Graph Graph::getTranspose()
{
    Graph g(V);
    for(int i=0;i<V;i++)
    {
        for(auto x:adj[i])
        {
            g.adj[x].push_back(i);
        }
    }
    return g;
}
void Graph::printSCCs()
{
    stack<int>st;
    bool visited[V];
    fill(visited,visited+V,false);

    for(int i=0;i<V;i++)
    if(visited[i]==false)
    fillOrder(i,visited,st);

    Graph gr=getTranspose();
    fill(visited,visited+V,false);

    while(!st.empty())
    {
        int u=st.top();
        st.pop();
        if(visited[u]==false)
        {
        gr.DFSUtill(u,visited);
        cout<<endl;
        }
    }
}
int main() 
{ 
	Graph g(5); 
	g.addEdge(1, 0); 
	g.addEdge(0, 2); 
	g.addEdge(2, 1); 
	g.addEdge(0, 3); 
	g.addEdge(3, 4); 

	cout << "Following are strongly connected components in given graph \n"; 
	g.printSCCs(); 

	return 0; 
} 
