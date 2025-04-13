#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0){
        cout<<"Factorial of negative numbers is not possible."<<endl;
    }
    else if(n==0 || n==1){
        cout<<"Factorial is 1."<<endl;
    }else{
        int fact = 1;
        for(int i=2;i<=n;i++){
            fact *= i;
        }
        cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    }
    return 0;
}