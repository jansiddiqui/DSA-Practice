// finding union using merge step in merge sort
#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b){
    vector<int> ans;
    int n = a.size();
    int m =b.size();
    int i=0, j=0;
    while(i<n && j<m){
        if(i>0 && a[i-1] == a[i]){
            i++;
            continue;
        }
        if(j>0 && b[j-1] == b[j]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        if(i>0 && a[i-1]==a[i]){
            i++;
            continue;
        }
        ans.push_back(a[i]);
        i++;
    }
    while(j<m){
        if(j>0 && b[j-1]==b[j]){
            j++;
            continue;
        }
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}
int main(){
    vector<int> a={2, 4, 5, 6, 8};
    vector<int> b={0, 2, 5, 9};
    vector<int> ans = findUnion(a, b);
    for(int x : ans){
        cout<<x<<" ";
    }
}
