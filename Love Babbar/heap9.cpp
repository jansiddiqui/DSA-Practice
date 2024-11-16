#include<bits/stdc++.h>
using namespace std;

vector<int> mergeHeaps(vector<int>& a, vector<int>& b, int n, int m){
    priority_queue<int> maxHeap;

    for(int i=0; i<n; i++){
        maxHeap.push(a[i]);
    }
    for(int i = 0; i<m; i++){
        maxHeap.push(b[i]);
    }
    
    vector<int> merged;

    while(!maxHeap.empty()){
        merged.push_back(maxHeap.top());
        maxHeap.pop();
    }
    return merged;
}
int main(){
    vector<int> a = {3, 4, 5, 6};
    vector<int> b = {12, 3, 6, 8};
    int n = a.size(), m = b.size();
    vector<int> merged = mergeHeaps(a, b, n, m);
    for(int i = 0; i<n+m; i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}