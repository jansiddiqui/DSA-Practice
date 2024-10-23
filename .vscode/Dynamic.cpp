#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    float *p=new float;
    float *r=new float;
    float *t=new float;
    float *si=new float;
    p=new float;
    r=new float;
    t=new float;
    si=new float;
    if(p==NULL || r==NULL || t==NULL || si==NULL){
        cout<<"\n Memory allocation failure";
        exit(1);
    }
    cout<<"\n Enter principle,rate and time:";
    cin>>*p>>*r>>*t;
    *si=(0.01)*(*p)*(*r)*(*t);
    cout<<"Simple Intrest: "<<*si<<endl;
    return 0;
}