#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        sum += i;
        
    }
    cout<<"sum of number for 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}