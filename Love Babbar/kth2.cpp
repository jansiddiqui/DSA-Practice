// QuickSelect 
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int l, int r){
    int x=arr[r], i=l;
    for(int j = l; j<= r-1; j++){
        if(arr[j] <= x){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}
int kthSmallest(vector<int>& arr, int l,int r, int k){
    if(k>0 && k<=r-l+1){
        int index = partition(arr,l,r);

        if (index - l == k-1){
            return arr[index];
        }

        if(index - l > k - 1){
            return kthSmallest(arr, l, index-1, k);
        }
        
        return kthSmallest(arr, index + 1, r, k-index+l-1);
    }
    return INT_MAX;
}
int main(){
    vector<int> arr = {10, 4, 5, 8, 6, 11, 26};
    int n = arr.size();
    int k = 3;
    cout<<"Kth smallest element is: "<<kthSmallest(arr, 0, n-1, k);
    return 0;
}