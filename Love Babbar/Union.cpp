#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
    int findUnion(vector<int>& a, vector<int>& b){
        set<int> unionSet;
        for(int num : a){
            unionSet.insert(num);
        }
        for(int num : b){
            unionSet.insert(num);
        }
        return unionSet.size();
    }
};
int main(){
    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        vector<int> a;
        vector<int> b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num){
            a.push_back(num);
        }

        getline(cin, input);
        stringstream ss2(input);
        while(ss2 >> num){
            b.push_back(num);
        }

        solution ob;
        cout << ob.findUnion(a, b)<<endl;
        cout << '~'<<endl;
    }
}