#include<bits/stdc++.h>
using namespace std;

// write  aprogram to check if are adult or not
//>= 18, yes
//<18, no

int main(){
    int age;
    cin >> age;
    if(age>=18 && age < 30){
        cout<<"Yes, u are an adult";
    }else if(age<18 && age>0){
        cout<<"No, u are not adult";
    }else{
        cout<<"Invalid Input";
    }
    return 0;
}