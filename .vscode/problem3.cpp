#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int expenses[n];

    for (int i = 0; i < n; i++){
        cin >> expenses[i];
    }
    if (n==1){
        cout << "0" << endl;
        return 0;
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++){
        totalSum += expenses[i];
    }

    int minSubarraySum = INT_MAX;
    int currentSubarraySum = 0;

    for (int i = 0; i < n; i++){
        currentSubarraySum += expenses[i];
        if (currentSubarraySum < minSubarraySum){
            minSubarraySum = currentSubarraySum;
        }
        if (currentSubarraySum > 0){
            currentSubarraySum = 0;
        }
    }

    int maxRemainingSum = totalSum - minSubarraySum;
    if (totalSum == minSubarraySum){
        maxRemainingSum = 0;
    }

    cout << maxRemainingSum << endl;

    return 0;
}