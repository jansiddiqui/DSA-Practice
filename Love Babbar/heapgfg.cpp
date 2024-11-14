#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> v;
        for(int i=0;i<K;i++)
        {
            for(int j=0;j<K;j++)
            {
                pq.push(arr[i][j]);
            }
        }
        
        while(!pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
        }
        
        return v;
    }
};
void printArray(vector<int> arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<vector<int>> arr(k, vector<int>(k, 0));
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                cin >> arr[i][j];
            }
        }
        Solution object;
        vector<int> output = object.mergeKArrays(arr, k);
        printArray(output, k * k);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
