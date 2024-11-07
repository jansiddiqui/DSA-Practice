// Approach 4: Two-Pass Approach
#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
    int negCount = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            negCount++;
        }
    }
    int i=0;
    int j=negCount;
    while(i<negCount && j<n){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>=0){
            j++;
        }
        else{
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
    }
}
void display(int arr[], int right){
    for(int i=0; i<right; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, arr_size-1);
    display(arr, arr_size-1);
    return 0;
}