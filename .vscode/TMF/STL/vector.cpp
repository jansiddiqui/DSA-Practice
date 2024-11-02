#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v3(5, 100);
    vector<int> v4(5);
    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " " << endl;

    it = it + 1; // Adjust increment to match vector size
    cout << *(it) << " " << endl;

    // Correct iterator types
    vector<int>::iterator it1 = v1.end();
    vector<int>::reverse_iterator it2 = v1.rend();
    vector<int>::reverse_iterator it3 = v1.rbegin();

    cout << v[0] << " " << v.at(0) << endl;
    cout << v.back() << " " << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " " << endl;
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " " << endl;
    }

    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    v = {10, 20, 12, 23};
    v.erase(v.begin() + 1); // Erase 20
    v = {10, 20, 12, 23, 35};
    v.erase(v.begin() + 2, v.begin() + 4); // Erase 12 and 23

    vector<int> vec_insert(2, 100);
    vec_insert.insert(vec_insert.begin(), 300);
    vec_insert.insert(vec_insert.begin() + 1, 2, 10);
    vector<int> copy(2, 50);
    vec_insert.insert(vec_insert.begin(), copy.begin(), copy.end());

    cout << vec_insert.size() << endl; // Output the size

    vec_insert.pop_back(); // Remove the last element

    vector<int> v5 = {10, 20};
    vector<int> v6 = {30, 40};
    v5.swap(v6); // Swap v5 and v6

    v.clear();
    cout << v.empty() << endl; // Check if the vector is empty
}

int main() {
    explainVector();
    return 0;
}
