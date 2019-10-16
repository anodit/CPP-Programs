#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void print(vector<int> graph[], int n)
{
    vector<int> :: iterator it;
    for(int i=0;i<n;i++)
    {
        cout<<"Adjacency List of vertex "<<i<<" -->";
        for(it=graph[i].begin();it!=graph[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,e,u,v;
    cout<<"Enter the No. of vertices : ";
    cin>>n;
    cout<<"\nEnter no.of edges : ";
    cin>>e;
    vector<int> graph[n];
    for(int i=0;i<e;i++)
    {
        cout<<"Enter Start and End Vertex of an Edge : ";
        cin>>u>>v;
        addEdge(graph,u,v);
    }
    print(graph,n);
    return 0;
}
