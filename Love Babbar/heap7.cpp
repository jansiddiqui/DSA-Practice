#include<bits/stdc++.h>
using namespace std;

vector<int> mergeKArrays(const vector<vector<int>>& arr){
    vector<int> res;

    for(const auto& vec : arr){
        for(int val : vec){
            res.push_back(val);
        }
    }
    sort(res.begin(), res.end());
    return res;
}
int main(){
    vector<vector<int>> arr = { {2, 6, 12, 34}, {1,7,36, 21, 12}, {5, 6, 3, 2,1}};
    vector<int> res = mergeKArrays(arr);

    for(int val : res){
        cout<<val<<" ";
    }
    return 0;
}