#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    int height;

    Node(int k){
        key = k;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};
int height(Node *N){
    if(N == nullptr)
        return 0;
    return N->height;
}

Node *rightRotate(Node *y){
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}