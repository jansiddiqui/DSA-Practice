#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b){
    vector<int> result = a;

    for(int i=0; i<b.size(); i++){
        int j;
        for(j=0; j<a.size(); j++){
            if(a[j] == b[i]){
                break;
            }
        }
        if(j == a.size()){
            result.push_back(b[i]);
        }
    }
    return result;
}
int main(){
    vector<int> a = {3, 5, 7};
    vector<int> b = {8, 3, 6};
    vector<int> result = findUnion(a, b);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
