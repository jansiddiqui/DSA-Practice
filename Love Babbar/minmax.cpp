#include<bits/stdc++.h>
using namespace std;

int setmini(int A[], int N){
    int mini = INT_MAX;
    for (int i=0;i<N;i++){
        if(A[i]<mini){
            mini = A[i];
        }
    }
    return mini;
}

int setmaxi(int A[], int N){
    int maxi = INT_MIN;
    for(int i=0; i<N; i++){
        if(A[i]>maxi){
            maxi = A[i];
        }
    }
    return maxi;
}
int main(){
    // int A[] = {4, 9, 6, 3, 8, 0, 2};
    // int N=6;
    int N;
    cout<<"Enter the number of elements: ";
    cin>>N;
    int A[N];
    cout<<"Enter the elements: ";
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    cout<<"Minimum element is: "<<setmini(A, N)<<endl;
    cout<<"Maximum element is: "<<setmaxi(A, N)<<endl;
}

//Time Complexity O(N)
//Auxiliary Space O(1)

class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        int setmini(int A[], int N){
    int mini = INT_MAX;
    for (int i=0;i<N;i++){
        if(A[i]<mini){
            mini = A[i];
        }
    }
    return mini;
}

int setmaxi(int A[], int N){
    int maxi = INT_MIN;
    for(int i=0; i<N; i++){
        if(A[i]>maxi){
            maxi = A[i];
        }
    }
    return maxi;
}
    }
};