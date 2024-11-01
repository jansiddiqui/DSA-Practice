#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    vec.push_back({1, 2});
    vec.emplace_back(1,2);

    vector<int> v3(5, 100);

    vector<int> v4(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it =v.begin();
    it++;
    cout<<*(it)<<" "<<endl;

    it = it+2;
    cout<<*(it)<<" "<<endl;

    vector<int>::iterator it1 = v1.end();
    vector<int>::reverse_iterator it2 = v1.rend();
    vector<int>::reverse_iterator it3 = v1.rbegin();

    cout<<v[0]<<" "<<v.at(0)<<endl;
    cout<<v.back()<<" "<<endl;

    for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout<<*(it)<<" "<<endl;
    }

    for(auto it = v.begin(); it !=v.end(); it++){
        cout<<*(it)<<" "<<endl;
    }

}

int main(){
    explainVector();
}