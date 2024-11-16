/*
Using Min-Heap
*/
#include<bits/stdc++.h>
using namespace std;

int kthlargestsum(int arr[], int N, int K){
    int sum[N+1];
    sum[0]=0;
    sum[1]=arr[0];
    for(int i=2;i<=N;i++){
        sum[i]=sum[i-1]+arr[i-1];
    }
    priority_queue<int, vector<int>, greater<int> > Q;

    for(int i=1; i<N; i++){
        for(int j=i;j<=N;j++){
            int x = sum[j] - sum[i - 1];
            if(Q.size()<K){
                Q.push(x);
            }
            else{
                if(Q.top()<x){
                    Q.pop();
                    Q.push(x);
                }
            }
        }
    }
    return Q.top();
}

int main(){
    int a[] = {10, -10, 20, -40};
    int N = sizeof(a)/sizeof(a[0]);
    int K = 6;

    cout<<kthlargestsum(a, N, K);
    return 0;
}