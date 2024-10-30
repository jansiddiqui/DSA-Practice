#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int dataTypeSize(string str){
        if (str == "int") return sizeof(int);
        else if (str == "float") return sizeof(float);
        else if (str == "double") return sizeof(double);
        else if (str == "char") return sizeof(char);
        else if (str == "long") return sizeof(long);
        else if(str == "bool") return sizeof(bool);
        else return -1;
    }
};

int main(){
    int t;
    cin>> t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        cout<<ob.dataTypeSize(str);
        cout << "\n";
        cout<<"~"<<endl;
    }
}