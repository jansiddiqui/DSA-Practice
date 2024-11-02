//reverse an array using inbuilt methods
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){
    reverse(arr.begin(), arr.end());
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}