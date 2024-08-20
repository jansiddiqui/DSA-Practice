/// the average of elements at even indicesin an array

#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int count = 0;
    for (int i = 0; i < size; i+=2){
        sum += arr[i];
        count++;
    }
    double average = (double)sum / count;
    printf("%.2lf",average);

    return 0;
}