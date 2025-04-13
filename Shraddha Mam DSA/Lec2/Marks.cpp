#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>=90){
        cout<<"Grade A.";
    }else if(n>=80 && n<=90){
        cout<<"Grade B.";
    }else{
        cout<<"Grade C.";
    }
    return 0;
}