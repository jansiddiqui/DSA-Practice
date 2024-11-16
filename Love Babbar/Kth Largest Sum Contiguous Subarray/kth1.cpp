/*
Prefix Sum and Sorting Approach
*/
#include<bits/stdc++.h>
using namespace std;

int kthlargestsum(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> prefixsum(n+1);
    prefixsum[0]=0;
    for(int i=0; i<=n; i++){
        prefixsum[i] = prefixsum[i-1] + arr[i-1];
    }

    vector<int> subarraysums;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            subarraysums.push_back(prefixsum[j] - prefixsum[i]);
        }
    }

    sort(subarraysums.begin(), subarraysums.end(), greater<int>());

    return subarraysums[k - 1];
}

int main(){
    vector<int> arr = {10, -10, 20, -40};
    int k = 6;
    cout << kthlargestsum(arr, k)<<endl;
    return 0;
}