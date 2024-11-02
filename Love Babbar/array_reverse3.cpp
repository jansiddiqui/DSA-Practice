//Reverse an array using Recursion
#include<bits/stdc++.h>
using namespace std;

void reverseArrayRec(vector<int> &arr, int l, int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverseArrayRec(arr, l+1, r-1);
}
void reverseArray(vector<int> &arr){
    int n=arr.size();
    reverseArrayRec(arr, 0, n-1);
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