#include<bits/stdc++.h>
using namespace std;

const int mx = 100;
vector<int> adj[mx];
bool vis[mx];

void dfs(int node)
{
    vis[node] = true;
    for(auto child : adj[node])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
    cout << node << ' ';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int edges;
    cin >> edges;

    for(int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int start_node;
    cin >> start_node;
    dfs(start_node);
}
