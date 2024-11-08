// finding union using nested loops
#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b){
    vector<int> result;
    for(int i=0;i<a.size();i++){
        int j;
        for(j=0; j<result.size();j++){
            if(result[j] == a[i]){
                break;
            }
        }
        if(j == result.size()){
            result.push_back(a[i]);
        }
    }
    for(int i=0;i<b.size(); i++){
        int j;
        for(j=0; j<result.size(); j++){
            if(result[j]==b[i]){
                break;
            }
        }
        if(i == result.size()){
            result.push_back(b[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}
int main(){
    vector<int> a = {1, 2, 6, 7, 8};
    vector<int> b = {2, 4, 6, 7, 8};
    vector<int> result = findUnion(a, b);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}