#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <utility>

using namespace std;

class Graph
{

    int V;
    list<int> *l; // int *arr

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
        // arr = new int [V]
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    bool isCycleDetUnBFS(int src, vector<bool> &vis)
    {
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;
        while (q.size() > 0)
        {
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();
            list<int> neighb = l[u];
            for (int v : neighb)
            {
                if (!vis[v])
                {
                    q.push({v, u});
                    vis[v] = true;
                }
                else if (v != parU)
                {
                    return true;
                }
            }
        }

        return false;
    }

    bool isCycle()
    {
        vector<bool> vis(V, false);
        int src = 0;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (isCycleDetUnBFS(i, vis))
                {
                    return true;
                }
            }
        }

        return false;
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    // g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(3, 4);

    // g.printAdjList();
    cout<< g.isCycle() << " ";
    cout << endl;

    return 0;
}
