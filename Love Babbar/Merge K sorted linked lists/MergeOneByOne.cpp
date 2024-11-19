#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr){}
};

Node* mergeTwo(Node* a, Node* b){
    Node* res = nullptr;

    if(a == nullptr) return b;
    if(b == nullptr) return a;

    if(a->data <= b->data){
        res = a;
        res->next = mergeTwo(a->next, b);
    }else{
        res = b;
        res->next = mergeTwo(a, b->next);
    }

    return res;
}

Node* mergeK(vector<Node*>& arr){
    Node *res = nullptr;

    for(Node *node : arr){
        res = mergeTwo(res, node);
    }
    return res;
}

void printList(Node* node){
    while(node != nullptr){
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main(){
    int k=4;
    vector<Node*> arr(k);

    arr[0] = new Node(1);
    arr[0]->next = new Node(3);
    arr[0]->next->next = new Node(5);
    arr[0]->next->next->next = new Node(7);

    arr[1] = new Node(2);
    arr[1]->next = new Node(4);
    arr[1]->next->next = new Node(6);
    arr[1]->next->next->next = new Node(8);

    arr[2] = new Node(0);
    arr[2]->next = new Node(9);
    arr[2]->next->next = new Node(10);
    arr[2]->next->next->next = new Node(11);

    arr[3] = new Node(0);
    arr[3]->next = new Node(9);
    arr[3]->next->next = new Node(10);
    arr[3]->next->next->next = new Node(11);

    Node* head = mergeK(arr);

    printList(head);

    return 0;
}