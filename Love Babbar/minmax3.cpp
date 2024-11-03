//minmax of an array using tournament method 
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low, int high){
    struct Pair minmax, mml, mmr;
    int mid;
    if(low==high){
        minmax.max =arr[low];
        minmax.min = arr[low];
        return minmax;
    }
    if(high==low+1){
        if(arr[low]>arr[high]){
            minmax.max=arr[low];
            minmax.min=arr[high];
        }
        else{
            minmax.max=arr[high];
            minmax.min=arr[low];
        }
        return minmax;
    }
    mid=(low+high)/2;
    mml=getMinMax(arr, low, mid);
    mmr=getMinMax(arr, mid+1, high);

    if(mml.min<mmr.min){
        minmax.min=mml.min;
    }
    else{
        minmax.min=mmr.min;
    }

    if(mml.max>mmr.max){
        minmax.max=mml.max;
    }
    else{
        minmax.max=mmr.max;
    }
    return minmax;
}
int main(){
    // int arr[] = {14, 25, 58, 63, 78};
    // int arr_size = 5;

    int arr_size;
    cout<<"Enter the number of elements: ";
    cin>>arr_size;

    int arr[arr_size];
    cout<<"Enter the elements: ";
    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }

    struct Pair minmax = getMinMax(arr, 0, arr_size-1);

    cout<<"Minimum element is: "<<minmax.min<<endl;
    cout<<"Maximum element is: "<<minmax.max;
    return 0;
}

// T.C :- O(n)
// S.C :- O(log n)