#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<2){
        cout << n <<" is not a prime number"<<endl;
    }else if(n==2){
        cout<<n<<" is a prime number"<<endl;
    }else if(n%2==0){
        cout<<n<<"is not a prime number"<<endl;
    }else if(n%2 != 0){
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                cout<<n<<" is not a prime number"<<endl;
                return 0;
            }
        }
        cout<<n<<" is a prime number"<<endl;
    }
}