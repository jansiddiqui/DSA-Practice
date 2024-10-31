#include<bits/stdc++.h>
using namespace std;

void jan(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void jaan(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void Jhallu(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int m;
    cin>>m;
    for(int i=1;i<m;i++){
        int n;
        cin>>n;
        jan(n);
        jaan(n);
        Jhallu(n);
    }
}