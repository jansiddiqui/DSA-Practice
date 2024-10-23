#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
int main(){
    Node* root = new Node(2);
    root->left = new Node(2);
    root->right = new Node(8);
    root->left->left = new Node(6);
    root->left->right = new Node(7);
    cout<<"Tree created!";
    return 0;
}