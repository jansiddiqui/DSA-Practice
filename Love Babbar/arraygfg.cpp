#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string reverseString(string& s){
        int n=s.size();
        vector<char> temp(n);
        for(int i=0;i<n;i++){
            temp[i]=s[n-i-1];
        }
        for(int i=0;i<n;i++){
            s[i]=temp[i];
        }
        return s;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.reverseString(s)<<endl;
        cout<<"~"
            <<"\n";
    }
    return 0;
}