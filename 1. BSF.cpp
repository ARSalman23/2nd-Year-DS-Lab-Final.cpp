#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const int mx = 100;
bool vis[mx];
vector<int> adj[mx];

void bfs(int starting_node)
{
    queue<int> q;
    vis[starting_node] = true;
    q.push(starting_node);

    while(!q.empty())
    {
        int current_node = q.front();
        q.pop();
        cout << current_node << ' ';

        for(auto child : adj[current_node])
        {
            if(!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

int main()
{
    adj[1].push_back(2);
    adj[1].push_back(5);

    adj[2].push_back(3);
    adj[2].push_back(6);

    adj[5].push_back(8);
    adj[5].push_back(6);

    adj[3].push_back(4);
    adj[6].push_back(7);

    adj[8].push_back(9);
    adj[9].push_back(8);

    adj[4].push_back(2);
    adj[4].push_back(5);

    adj[7].push_back(6);
    adj[7].push_back(9); //1 2 5 3 6 8 4 7 9

    bfs(1);
}
