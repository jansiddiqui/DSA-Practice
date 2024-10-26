#include <iostream>
using namespace std;

//80-100  A
//79-60 B
//59-50 C
//49-45 D
//44-25 E
//25 - 0 F
int main(){
    int marks;
    cout<<"Enter Your marks: ";
    cin>>marks;
    if(marks<=100 && marks>=80){
        cout<<"You got A Grade!";
    }else if(marks<=79 && marks>=60){
        cout<<"You got B Grade!";
    }else if(marks<=59 && marks>=50){
        cout<<"You got C Grade!";
    }else if(marks<=49 && marks>=45){
        cout<<"You got D Grade!";
    }else if(marks<=44 && marks>=25){
        cout<<"You got E Grade!";
    }else if( marks<=25 && marks>=0){
        cout<<"You got F Grade!";
    }else{
        cout<<"Invalid Marks! Try Again...";
    }
    return 0;
}