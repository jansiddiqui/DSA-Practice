// Ditch National Flag Problem :- Naive Approach

#include<bits/stdc++.h>
using namespace std;

void sortDutchFlag(int arr[], int n){
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            count0++;
        }else if (arr[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }

    int index = 0;
    while(count0 > 0){
        arr[index++] = 0;
        count0--;
    }
    while(count1 > 0){
        arr[index++] = 1;
        count1--;
    }
    while(count2>0){
        arr[index++] = 2;
        count2--;
    }
}

int main(){
    int arr[] = {2, 1, 0, 1, 1, 0, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortDutchFlag(arr, n);

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
