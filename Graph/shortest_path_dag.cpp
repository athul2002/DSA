#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
class AdjListNode
{
    int v;
    int weight;
    public:
    AdjListNode(int _v,int _w)
    {
        v=_v;
        weight=_w;
    }
    int getV()
    {
        return v;

    }
    int getWeight()
    {
        return weight;
    }
};

class Graph
{
    int V;
    list <AdjListNode> *adj;
    void topological(int v, bool visited[], stack<int> &st);
    public:
    Graph(int V);
    void addEdge(int u,int v,int weight);
    void shortestPath(int s);
};

Graph::Graph(int V)
{
    this->V=V;
    adj=new list<AdjListNode>[V];
}

void Graph::addEdge(int u,int v,int weight)
{
    AdjListNode node(v,weight);
    adj[u].push_back(node);
}

void Graph::topological(int v,bool visited[],stack<int>&st)
{
    visited[v]=true;
    for(auto x:adj[v])
    {
        AdjListNode node=x;
        if(visited[node.getV()]==false)
        topological(node.getV(),visited,st);
    }
    st.push(v);
}
void Graph::shortestPath(int s)
{
    stack<int>st;
    int dist[V];
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;

    for(int i=0;i<V;i++)
    dist[i]=INF;
    dist[s]=0;

    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        topological(i,visited,st);
    }

    while(!st.empty())
    {
        int u=st.top();
        st.pop();

        if(dist[u]!=INF)
        {
            for(auto x:adj[u])
            {
                AdjListNode node = x;
                if(dist[node.getV()]>dist[u]+node.getWeight())
                {
                    dist[node.getV()]=dist[u]+node.getWeight();
                }
            }
        }
    }

	for (int i = 0; i < V; i++) 
		(dist[i] == INF)? cout << "INF ": cout << dist[i] << " "; 
}
int main()
{
	Graph g(6); 
	g.addEdge(0, 1, 2); 
	g.addEdge(0, 4, 1); 
	g.addEdge(1, 2, 3); 
	g.addEdge(4, 2, 2); 
	g.addEdge(4, 5, 4); 
	g.addEdge(2, 3, 6); 
	g.addEdge(5, 3, 1);

	int s = 0; 
	cout << "Following are shortest distances from source " << s <<" \n"; 
	g.shortestPath(s); 

	return 0; 
}