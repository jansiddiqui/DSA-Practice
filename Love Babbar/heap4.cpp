#include<bits/stdc++.h>
using namespace std;

void printKMax(const vector<int>& a, int k){
    deque<int>Qi(k);
    int i;
    for(i=0;i<k;++i){
        while(!Qi.empty() && a[i] >= a[Qi.back()]){
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    for(;i<a.size();++i){
        cout<<a[Qi.front()]<<" ";
        while(!Qi.empty() && Qi.front() <= i-k){
            Qi.pop_front();
        }
        while(!Qi.empty() && a[i] >= a[Qi.back()]){
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    cout<<a[Qi.front()];
}
int main(){
    vector<int> a={12, 1, 67, 89, 56, 98, 90};
    int k=4;
    printKMax(a, k);
    return 0;
}