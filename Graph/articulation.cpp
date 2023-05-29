#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

class Solution {
private:
    int timer = 1;
    void dfs(int node, int parent, vector<int> &visited, int tin[], int low[],
             vector<int> &mark, vector<int>adj[]) {
                visited[node]=1;
                tin[node]=low[node]=timer;
                timer++;
                for(auto it:adj[node])
                {
                    if(visited[it]==false)
                    {
                        dfs(it,node,visited,tin,low,mark,adj);
                        low[node]=min(low[node],low[it]);
                        if(low[it]>=tin[node] && parent!=-1)
                        mark[node]=1;
                    }
                    else
                        low[node]=min(low[node],tin[it]);
                }

    }
public:
vector<int>articulationPoints(int n,vector<int>adj[])
{
    vector<int>ans;
    int tin[n];
    int low[n];
    vector<int>mark(n,0);
    vector<int>visited(n,0);
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i,-1,visited,tin,low,mark,adj);
        }
    }
    // vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
            ans.push_back(i);
        }
    }
    if (ans.size() == 0) return { -1};
    return ans;
}
};
int main() {
    int n = 5;
    vector<vector<int>> edges = {
        {0, 1}, {1, 4},
        {2, 4}, {2, 3}, {3, 4}
    };

    vector<int> adj[n];
    for (auto it : edges) {
        int u = it[0], v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    vector<int> nodes = obj.articulationPoints(n, adj);
    for (auto node : nodes) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}