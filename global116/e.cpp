#include<bits/stdc++.h>
using namespace std;

int topologicalSort(vector<vector<int>> adj, int n)
{
    vector<int> indegree(n, 0);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < adj[i].size(); j++)
        {
            indegree[adj[i][j]]++;
        }
    }
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }
    int count = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        count++;
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            indegree[v]--;
            if(indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }
    if(count == n)
    {
        return 1;
    }
    return 0;
}