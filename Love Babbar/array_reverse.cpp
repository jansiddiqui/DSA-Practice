// reverse an array using temporary array
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){
    int n = arr.size();

    //temporary array to store elements
    vector<int> temp(n);

    //copy array from original array
    for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
    }
    //copy elements back to original array
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

