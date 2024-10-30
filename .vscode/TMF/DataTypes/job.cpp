#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Plaese enter you age: ";
    cin>>age;
    if(age<18){
        cout<<"You are not eligible for job!";
    }else if(age>=18 && age<55){
        cout<<"You are eligible for job!";
    }else if(age>=55 && age<=57){
        cout<<"Eligible for job. But retirement very soon!";
    }else if(age>57){
        cout<<"You are retired!";
    }
    return 0;
}