#include<bits/stdc++.h>
using namespace std;

void jan(int n){
    for(int i=0;i<=n;i++){
        //space
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}
int main(){
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        int n;
        cin>>n;
        jan(n);
    }
}