// You are using GCC
#include<iostream>
using namespace std;

void warshellAlgorithm(int graph[5][5], int V){
    for(int k=0; k<V; k++){
        for(int i=0;i<V;i++){
            for(int j=0; j<V; j++){
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

void printMatrix(int graph[5][5], int V){
    for(int i=0; i<V;i++){
        for(int j=0; j<V;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int V = 5;
    int graph[5][5] = {
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0},
        {1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {1, 0, 0, 1, 0}
    };
    cout<<"Original matrix: "<<endl;
    printMatrix(graph, V);
    warshellAlgorithm(graph, V);
    cout<<"\n matrix after applying Warshall's algorithm: "<<endl;
    printMatrix(graph, V);
    return 0;
}