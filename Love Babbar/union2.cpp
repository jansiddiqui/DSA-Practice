// Using Hash Set
#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b){
    unordered_set<int> st;
    for(int i=0; i<a.size(); i++){
        st.insert(a[i]);
    }
    for(int i=0; i<b.size(); i++){
        st.insert(b[i]);
    }
    vector<int> result;
    for(auto it: st){
        result.push_back(it);
    }
    return result;
}
int main(){
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3, 2, 2, 3, 3, 2};
    vector<int> result = findUnion(a, b);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}