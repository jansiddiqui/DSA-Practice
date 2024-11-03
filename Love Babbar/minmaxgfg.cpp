#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        long long int mini = LLONG_MAX;
        long long int maxi = LLONG_MIN;

        for (long long int num : arr) { // Ensure 'num' is properly declared here
            if (num < mini) {
                mini = num;
            }
            if (num > maxi) {
                maxi = num;
            }
        }

        return make_pair(mini, maxi);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        pair<long long, long long> result = ob.getMinMax(arr);
        cout << "Minimum element is: " << result.first << endl;
        cout << "Maximum element is: " << result.second << endl;
    }
    return 0;
}
