#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18 && age<100){
        cout<<"You are an adult.";
    }else if(age<18 && age>1){
        cout<<"You are minor.";
    }else if(age<=0 || age>100){
        cout<<"Incorrect age!";
    }
    return 0;
}