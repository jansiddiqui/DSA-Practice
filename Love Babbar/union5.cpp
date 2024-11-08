// finding union using set
#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b){
    set<int> st;
    for(int i=0; i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0; i<b.size(); i++){
        st.insert(b[i]);
    }
    vector<int> ans;
    for(auto it:st){
        ans.push_back(it);
    }
    return ans;
}
int main(){
    vector<int> a={2, 3, 6, 7};
    vector<int> b={3, 4, 6, 9, 0};
    vector<int> ans = findUnion(a, b);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}