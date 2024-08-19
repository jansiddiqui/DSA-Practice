#include <iostream>
using namespace std;

// Deletion : At the Beginning
// int main(){
//     int array[10] = {1, 2, 3, 4, 5};
//     int size = 5;

//     for (int i = 0; i < size -1; i++){
//         array[i] = array[i + 1];
//     }

//     size--;

//     for (int i = 0; i < size; i++){
//         cout << array[i] << " ";
//     }
//     return 0;
// }

// Deletion : At the End 
// int main(){
//     int array[10] = {1, 2, 3, 4, 5};
//     int size = 5;

//     size--;

//     for (int i = 0; i < size; i++){
//         cout << array[i] << " ";
//     }

//     return 0;
// }

// Deletion : At the Specified position
int main(){
    int array[10] = {1, 2, 3, 4, 5};
    int  size = 5;
    int deletePosition = 2;

    for (int i = deletePosition; i < size - 1; i++){
        array[i] = array[i + 1];
    }

    size--;

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}