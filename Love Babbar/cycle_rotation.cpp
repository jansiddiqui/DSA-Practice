#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int k){

    int  i, j;
    for(i = 0, j=n-k-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(i=0, j=n-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    int i, j;

    cout<<"Given array is \n";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    rotate(arr, n, k);

    cout<<"\n Rotate array is\n";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}