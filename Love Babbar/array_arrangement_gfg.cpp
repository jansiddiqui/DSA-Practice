#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(vector<int>& arr){
        int n = arr.size();
        vector<int> temp(n);
        int j = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                temp[j++] = arr[i];
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                temp[j++] = arr[i];
            }
        }
        
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};

int main(){
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while(t--){
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while(ss >> num){
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);
        for(int x : nums){
            cout << x << " ";
        }
        cout << "\n~\n";
    }
}
