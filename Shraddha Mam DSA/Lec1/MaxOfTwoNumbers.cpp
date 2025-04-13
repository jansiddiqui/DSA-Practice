#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the second number: ";
    cin >>m;

    if(n>m){
        cout<<n<<" is greater than "<<m<<endl;
    }else if(m>n){
        cout<<m<<" is greater than "<<n<<endl;
    }else{
        cout<<n<<" and "<<m<<" are equal.";
    }
    return 0;
}