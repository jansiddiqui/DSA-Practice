#include<bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int>& arr, int n, int idx){
    if(idx >= n){
        return;
    }
    int l = 2*idx+1;
    int r = 2*idx+2;
    int max = idx;
    if(l<n && arr[l]>arr[idx]){
        max = l;
    }
    if(r<n && arr[r]>arr[max]){
        max = r;
    }
    if(max != idx){
        swap(arr[idx], arr[max]);
        maxHeapify(arr, n,max);
    }
}

void buildMaxHeap(vector<int>& arr, int n){
    for(int i=n/2-1; i>=0; i--){
        maxHeapify(arr, n, i);
    }
}

vector<int>mergeHeaps(vector<int>& a, vector<int>& b, int n, int m){
    vector<int> merged(n+m, 0);
    for(int i=0; i<n; i++){
        merged[i] = a[i];
    }
    for(int i=0; i<m; i++){
        merged[n+i] = b[i];
    }

    buildMaxHeap(merged, n+m);
    return merged;
}

int main(){
    vector<int> a = {25, 3, 4, 6, 9};
    vector<int> b = {2, 4, 5, 12, 3};

    int n = a.size();
    int m = b.size();

    vector<int> merged = mergeHeaps(a, b, n, m);

    for(int i=0; i<n+m; i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}