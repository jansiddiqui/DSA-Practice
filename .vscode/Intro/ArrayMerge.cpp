#include<iostream>
using namespace std;

int main(){
    int array1[] = {9, 8, 4, 1, 5};
    int array2[] = {6, 7, 0, 2};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int mergedArray[size1 + size2];

    for (int i=0; i < size1; i++){
        mergedArray[i] = array1[i];
    }
    for (int i=0; i < size2; i++){
        mergedArray[size1 + i] = array2[i];
    }

    for(int i=0; i<size1+size2; i++){
        cout << mergedArray[i] << " ";
    }
    return 0;
}