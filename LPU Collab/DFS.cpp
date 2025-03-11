#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    public:
        Graph(int V);
        void addEdge(int v, int w);
        void DFS(int s);
};

Graph::Graph(int v)
{
    this->V = v;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
    //adj[w].push_back(v);
}

void Graph::DFS(int s)
{
    vector<bool>visited(V, false);
    stack<int> stack;
    stack.push(s);
    while(!stack.empty())
    {
        int node = stack.top();
        stack.pop();
        if(!visited[s])
        {
            cout<<s<<" ";
            visited[s] = true;
        }
        for(auto i = adj[s].begin(); i!=adj[s].end(); i++)
        {
            if(!visited[*i])
            {
                stack.push(*i);
            }
        }
    }
}

int main(){
    int V, i, snode, enode;
    cin>>V;
    if(V==0){
        cout<<"Graph does not exist";
        return 0;
    }
    Graph g(V);
    cin>>snode>>enode;
    while(snode != -1 && enode != -1)
    {
        g.addEdge(snode, enode);
        cin>>snode>>enode;
    }
    cout<<"DFS ";
    g.DFS(0);
    return 0;
}