#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    int count = 1;
    while(count <= n){
        sum += count;
        count++;
    }
    cout<<"Sum of number for 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}