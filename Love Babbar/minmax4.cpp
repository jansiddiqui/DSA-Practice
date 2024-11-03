//minmax of an array by comparing in pairs
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int n){
    struct Pair minmax;
    int i;

    if(n%2==0){
        if(arr[0]>arr[1]){
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else{
            minmax.min =arr[0];
            minmax.max =arr[1];
        }
        i=2;
    }
    else{
        minmax.min = arr[0];
        minmax.max = arr[0];
        i=1;
    }

    while(i<n-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>minmax.max){
                minmax.max =arr[i];
            }
            if(arr[i+1]<minmax.min){
                minmax.min=arr[i+1];
            }
        }
        else{
            if(arr[i+1]>minmax.max){
                minmax.max=arr[i+1];
            }
            if(arr[i]<minmax.min){
                minmax.min=arr[i];
            }
        }
        i+=2;
    }
    return minmax;
}
int main(){
    // int arr[]={12,254,26,45,142};
    // int arr_size = 5;
    int arr_size;
    cout<<"Enter the munber of elements: ";
    cin>>arr_size;
    int arr[arr_size];
    cout<<"Enter the elements: ";
    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }

    Pair minmax = getMinMax(arr, arr_size);

    cout<<"Minimum element is: "<<minmax.min<<endl;
    cout<<"Maximum element is: "<<minmax.max;
}