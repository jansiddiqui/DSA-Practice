// Expected approach := Using priority queue
#include<bits/stdc++.h>
using namespace std;

int kthSamllest(int arr[], int N, int K){
    priority_queue<int> pq;

    for(int i=0; i<N;i++){
        pq.push(arr[i]);

        if(pq.size()>K)
            pq.pop();
    }
    return pq.top();
}

int main(){
    int N;
    cout<<"enter the number of element in the array: ";
    cin>>N;
    // int arr[N] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int arr[N];
    cout<<"Enter the array element: ";
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    // int K = 4;
    int K;
    cout<<"Enter the value of K: ";
    cin>>K;
    cout<<"Kth Smallest Element is: "<<kthSamllest(arr, N, K);
}