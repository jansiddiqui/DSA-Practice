// Maximum and Minimum of an array using Sorting
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n){
    Pair minmax;
    sort(arr, arr+n);
    minmax.min = arr[0];
    minmax.max = arr[n-1];
    return minmax;
}
int main(){
    // int arr[]={100, 22, 784, 893};
    // int arr_size=sizeof(arr)/sizeof(arr[0]);
    int arr_size;
    cout<<"Enter the number of elements: ";
    cin>>arr_size;

    int arr[arr_size];
    cout<<"Enter the elements: ";
    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }

    Pair minmax = getMinMax(arr, arr_size);

    cout<<"Minimum element is: "<<minmax.min<<endl;
    cout<<"Maximum element is: "<<minmax.max<<endl;

    return 0;
}


//T.C :- O(n log n)
//S.C :- O(1)