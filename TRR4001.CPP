include<bits / stdc++.h> using namespace std;

int a[105][105];
int vs[105];
int n, s, t;

struct Edge
{
    int u;
    int v;
};
vector<Edge> T;

#DFS
void DFS(int u)
{
    vs[u] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[u][i] = 1 && vs[i] == 0)
        {
            Edge e;
            if (u < i)
            {
                e.u = u;
                e.v = i;
            }
            else
            {
                e.u = i;
                e.v = u;
            }
            T.push_back(e);
            DFS(i);
        }
    }
}
#BFS
void BFS(int start)
{
    queue<int> q;
    vs[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[u][i] == 1 && vs[i] = 0)
        {
            vs[i] = 1;
            Edge e;
            if (u < i)
            {
                e.u = u;
                e.v = i;
            }
            else
            {
                e.u = i;
                e.v = u;
            }
            T.push_back(e);
            q.push(i);
        }
    }
}
