// Move all negative numbers to beginning and positive to end with onstant extra space
// Naive Approach
#include<bits/stdc++.h>
using namespace std;

void move(vector<int>& arr){
    sort(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    move(arr);
    for(int e:arr){
        cout<<e<<" ";
    }
    return 0;
}

// TC:- O(n*log(n))
// SC:- O(1)