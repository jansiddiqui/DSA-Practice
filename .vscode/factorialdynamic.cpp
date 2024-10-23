#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int *fact =NULL;
    int *p=NULL;
    p = new int;
    fact = new int;
    if(p==NULL||fact==NULL){
        cout<<"\n Memory allocation failure";
        exit(1);
    }
    cout<<"Enter the number: ";
    cin>>*p;
    *fact=1;
    for(int i=1;i<=*p;i++){
        *fact*=i;
    }
    cout<<"Factorial of "<<*p<<" is: "<<*fact<<endl;
    return 0;
}