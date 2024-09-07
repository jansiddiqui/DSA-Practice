#include<iostream>
using namespace std;

// int main(){
//     int array1[] = {9, 8, 4, 1, 5};
//     int array2[] = {6, 7, 0, 2};

//     int size1 = sizeof(array1) / sizeof(array1[0]);
//     int size2 = sizeof(array2) / sizeof(array2[0]);

//     int mergedArray[size1 + size2];

//     for (int i=0; i < size1; i++){
//         mergedArray[i] = array1[i];
//     }
//     for (int i=0; i < size2; i++){
//         mergedArray[size1 + i] = array2[i];
//     }

//     for(int i=0; i<size1+size2; i++){
//         cout << mergedArray[i] << " ";
//     }
//     return 0;
// }

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int mergedArray[]){
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2){
        if (arr1[i] < arr2[j]){
            mergedArray[k++] = arr1[i++];
        }else{
            mergedArray[k++] = arr2[j++];
        }
    }
    while (i < n1){
        mergedArray[k++] = arr1[i++];
    }
    while (j < n2){
        mergedArray[k++] = arr2[j++];
    }
}
int main(){
    int arr1[] = {9, 8, 4, 1, 5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int mergedArray[n1 + n2];

    mergeSortedArrays(arr1, n1, arr2, n2, mergedArray);

    cout << "Merged Sorted array: ";
    for (int i = 0; i < n1 + n2; i++){
        cout << mergedArray[i] << " ";
    }
    return 0;
}