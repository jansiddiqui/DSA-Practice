#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int kthSmallest(vector<int> &arr, int k){
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i = 0; i < arr.size(); i++){ 
            minHeap.push(arr[i]); 
        } 
        for(int i = 1; i < k; i++){ 
            minHeap.pop(); 
        } 
        return minHeap.top();
    }
};

int main(){
    int test_case;
    cin>>test_case;
    cin.ignore();
    while(test_case--){
        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while(ss>>number){
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while(ss>>number){
            crr.push_back(number);
        }
        k=crr[0];
        int n =arr.size();
        Solution ob;
        cout<<ob.kthSmallest(arr, k)<<endl<<"~\n";
    }
    return 0;
}
