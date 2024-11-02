#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){
    int n = arr.size();

    //Iterate over the first half and for every index i
    // swap arr[i] with arr[n-i-1]
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }
}
int main(){
    int n;
    cout<<"Enter the number if element: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}