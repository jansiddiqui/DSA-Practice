//Naive Approach := Using Sorting
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int N, int K){
    sort(arr, arr+N);
    return arr[K - 1];
}
int main(){
    int arr[] = {23, 14, 67, 89, 4};
    int N = sizeof(arr)/sizeof(arr[0]), K = 4;

    cout << "K'th smallest element is "<<kthSmallest(arr, N, K);
    return 0;
}


// TC -> O(N log N)
// Sc -> O(1)