//minmax of an array using linear search
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n){
    struct Pair minmax;
    int i;

    if(n==1){
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }

    if(arr[0]>arr[1]){
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else{
        minmax.max=arr[1];
        minmax.min=arr[0];
    }
    for(i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
    }
    return minmax;
}
int main(){
    // int arr[]={526, 14, 36, 1, 23, 10};
    // int arr_size=6;
    int arr_size;
    cout<<"Enter the number elements: ";
    cin>>arr_size;
    int arr[arr_size];
    cout<<"Enter the elements: ";
    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }
    struct Pair minmax = getMinMax(arr, arr_size);
    cout<<"Minimum element is: "<<minmax.min<<endl;
    cout<<"Maximum element is: "<<minmax.max<<endl;
    return 0;
}
