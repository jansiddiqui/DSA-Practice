#include<iostream>
using namespace std;

    //Function are set of code which performs something for you
    //Functions are used to modularise code
    //Functions are used to increse readability
    //Functions are used to use same code multiple time
    //void -> which does not returns anything
    //return
    //parameterized
    //non parameterized

// void printNumber(){
//     cout<<"hey Jan!";
// }
// int main(){
//     string name;
//     cin>>name;
//     printNumber(name);
//     return 0;
// }

// int sum(int num1, int num2){
//     if (num1>num2) return num1;
//     else return num2;
// }
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int re = sum(num1,num2);
//     cout<<re;
//     return 0;
// }

// void doSomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout<<num<<endl;
//     return 0;
// }

void doSomething(string s){
    s[0]='t';
    cout<<s;
}
int main(){
    string s= "jan";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}