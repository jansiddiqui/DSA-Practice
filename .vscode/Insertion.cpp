#include <iostream>
using namespace std;

// Insertion : At the Beginning
// int main(){
//     int array[10] = {1, 2, 3, 4, 5};
//     int newElement = 9;
//     for(int i = 6; i > 1; i--){
//         array[i] = array[i - 2];
//     }
//     array[0] = newElement;
//     for(int i = 0; i < 6; i++){
//         cout << array[i] << " ";
//     }
//     return 0;
// }


// Insertion : At the End
// int main(){
//     int array[10] = {1, 2, 3, 4, 5};
//     int newElement = 9;
    
//     int size = 0;
//     while (size < 10 && array[size] != 0){
//         size++;
//     }
//     array[size] = newElement;
//     for(int i = 0; i < 6; i++){
//         cout << array[i] << " ";
//     }
//     return 0;
// }

// Insertion : At the Specified Position
int main(){
    int array[10] = {1, 2, 3, 4, 5};
    int newElement = 9;
    int insertPosition = 2;
    
    int size = 5;

    for (int i = size; i > insertPosition; i--){
        array[i] = array[i - 1];
    }
    array[insertPosition] = newElement;
    size++;
    
    for(int i = 0; i < 6; i++){
        cout << array[i] << " ";
    }
    return 0;
}