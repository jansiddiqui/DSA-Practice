// Naive Approach := Using Nested Loops
#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b){
    vector<int> unionSet;
    for(int i=0; i<a.size(); i++){
        int j;
        for(j=0; j<unionSet.size(); j++){
            if(unionSet[j] == a[i]){
                break;
            }
        }
        if(j==unionSet.size()){
            unionSet.push_back(a[i]);
        }
    }
    for(int i=0; i<b.size(); i++){
        int j;
        for(j=0; j<unionSet.size(); j++){
            if(unionSet[j] == b[i]){
                break;
            }
        }
        if(j==unionSet.size()){
            unionSet.push_back(b[i]);
        }
    }
    return unionSet;
}
int main(){
    vector<int> a={1, 2, 3, 2, 1};
    vector<int> b={3, 2, 2, 3, 3, 2};

    vector<int> unionSet = findUnion(a, b);

    for(int i=0; i<unionSet.size(); i++){
        cout<< unionSet[i]<<" ";
    }
    return 0;
}
