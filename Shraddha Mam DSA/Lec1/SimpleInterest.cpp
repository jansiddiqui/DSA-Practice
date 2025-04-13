#include<bits/stdc++.h>
using namespace std;

int main(){
    int p, r, t;
    cout<<"Enter the Principal amount: ";
    cin>>p;
    cout<<"Enter the Rate of interest: ";
    cin>>r;
    cout<<"Enter thr Time period: ";
    cin>>t;

    int interest = (p*r*t)/100;
    cout<<"Simple intrest is: "<<interest;
    return 0;
}