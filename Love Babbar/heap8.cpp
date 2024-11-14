/*

*/
#include<bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& a, vector<int>& b, vector<int>& c){
    int i = 0, j=0, k=0;
    int n1 = a.size();
    int n2 = b.size();
    c.resize(n1+n2);

    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    while(i<n1){
        c[k++] = a[i++];
    }
    while(j<n2){
        c[k++] = b[j++];
    }
}

void mergeKArrays(vector<vector<int>>& arr, int lo, int hi, vector<int>& res){
    if(lo == hi){
        res = arr[lo];
        return;
    }
    if(hi - lo == 1){
        mergeArrays(arr[lo], arr[hi], res);
        return;
    }
    int mid = (lo + hi)/2;
    vector<int> out1, out2;
    mergeKArrays(arr, lo, mid, out1);
    mergeKArrays(arr, mid+1, hi, out2);

    mergeArrays(out1, out2, res);
}

int main(){
    vector<vector<int>> arr = { {2, 4, 5, 6, 7, 8}, {34, 35, 67, 77, 567}, {23, 545}};
    vector<int> res;

    mergeKArrays(arr, 0, arr.size() - 1, res);

    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}