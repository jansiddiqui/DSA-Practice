#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0 || n>100){
        cout<<"Invalid inputs."<<endl;
    }else if(n<18 && n>0){
        cout<<"You are not eligible for a driving liscence."<<endl;
    }else if(n>=18 && n<=100){
        cout<<"You are eligible for a driving liscence.";
    }
    return 0;
}