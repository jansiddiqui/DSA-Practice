/// finding the profit or loss of a month from given data

#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);

    int expenses[n];

    for (int i = 0; i < n; i++){
        scanf("%d",&expenses[i]);
    }

    if (n==1){
        printf("0\n");
        return 0;
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++){
        totalSum += expenses[i];
    }

    int minSubarraySum = INT_MAX;
    int currentSubarraySum = 0;

    for(int i = 0; i<n; i++){
        currentSubarraySum += expenses[i];
        if (currentSubarraySum < minSubarraySum){
            minSubarraySum = currentSubarraySum;
        }
        if (currentSubarraySum>0){
            minSubarraySum = 0;
        }
    }

    int maxRemainingSum = totalSum - minSubarraySum;
    if (totalSum == minSubarraySum){
        maxRemainingSum = 0;
    }
    printf("%d\n",maxRemainingSum);
    return 0;
}