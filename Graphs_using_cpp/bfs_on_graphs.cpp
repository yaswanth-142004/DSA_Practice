#include<bits/stdc++.h>

class Graph{
    int V;
    vector<int> *adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    vector<int> BFS(int s);
};

Graph::Graph(int V){
    this->V = V;
    adj = new vector<int>[V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

vector<int> Graph:: BFS(int s)
{
    int vis[this->V]= {0};
    vector<int> ans;
    queue<int> q;
    q.push(s);
    vis[s] = 1;

    while(!q.empty()
    {
        int node = q.front();
        q.pop();
        ans.push(node);

        for(auto it :adj[node])
        {
            if(!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    })


}

int main()
{


    return 0;
}


using namespace std;

