#include<iostream>
using namespace std;
int main(){
    string s="Jan mohammad";
    int len = s.size();
    s[len-1]='t';
    cout<<s[len-1];
    return 0;
}