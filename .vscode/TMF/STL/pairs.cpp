#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p1={1, 3};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first<<endl;
    pair<int, int> arr[]={{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second;
    cout<<arr[0].first;
}

int main(){
    explainPair();
}