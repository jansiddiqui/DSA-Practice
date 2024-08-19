// Insertion : At the Beginning
#include <iostream>
using namespace std;
int main(){
    int array[10] = {1, 2, 3, 4, 5};
    int newElement = 9;
    for(int i = 6; i > 1; i--){
        array[i] = array[i - 2];
    }
    array[0] = newElement;
    for(int i = 0; i < 6; i++){
        cout << array[i] << " ";
    }
    return 0;
}