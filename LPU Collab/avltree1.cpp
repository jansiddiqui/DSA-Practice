#include<bits/stdc++.h>
using namespace std;

struct AVLwithparent{
    struct AVLwithparent* left;
    struct AVLwithparent* right;
    int key;
    struct AVLwithparent* par;
    int height;
};

void Updateheight(struct AVLwithparent* root){
    if(root!=NULL){
        int val=1;
        if(root->left != NULL){
            val=root->left->height + 1;
        }
        if(root->right != NULL){
            val=max(val, root->right->height+1);
        }
        root->height = val;
    }
}
struct AVLwithparent* LLR(struct AVLwithparent* root){
    struct AVLwithparent* tmpnode = root->left;
    root->left = tmpnode->right;
    if(tmpnode->right != NULL){
        tmpnode->right->par = root;
    }
    tmpnode->par = root->par;
    root->par = tmpnode;
    if(tmpnode->par != NULL && root->key < tmpnode->par->key){
        tmpnode->par->left = tmpnode;
    }
    else{
        if(tmpnode->par != NULL){
            tmpnode->par->right = tmpnode;
        }
    }
    root = tmpnode;
    Updateheight(root->left);
    Updateheight(root->right);
    Updateheight(root);
    Updateheight(root->par);
    return root;
}

struct AVLwithparent* RRR(struct AVLwithparent* root){
    struct AVLwithparent* tmpnode = root->right;
    root->right = tmpnode->left;
    if(tmpnode->left !=NULL){
        tmpnode->left->par=root;
    }
    tmpnode->left = root;
    tmpnode->par = root->par;
    root->par = tmpnode;
    if(tmpnode->par != NULL && root->key <tmpnode->par->key){
        tmpnode->par->left=tmpnode;
    }
    else{
        if(tmpnode->par != NULL){
            tmpnode->par->right=tmpnode;
        }
    }
    root = tmpnode;
    Updateheight(root->left);
    Updateheight(root->right);
    Updateheight(root);
    Updateheight(root->par);
    return root;
}

struct AVLwithparent* LRR(struct AVLwithparent* root){
    root->left = RRR(root->left);
    return LLR(root);
}

struct AVLwithparent* RLR(struct AVLwithparent* root){
    root->right = LLR(root->right);
    return RRR(root);
}

struct AVLwithparent* Insert(
    struct AVLwithparent* root,
    struct AVLwithparent* parent,
    int key){
        if(root == NULL){
            root = new struct AVLwithparent;
            if (root == NULL){
                cout<<"Error in memory"<<endl;
            }
            else{
                root->height = 1;
                root->left = NULL;
                root->right = NULL;
                root->par = parent;
                root->key = key;
            }
        }
        else if(root->key>key){
            root->left = Insert(root->left, root, key);
            int firstheight =0;
            int secondheight = 0;
            if(root->left!= NULL){
                firstheight = root->left->height;
            }
            if(root->right != NULL){
                    secondheight = root->right->height;
            }
            if(abs(firstheight - secondheight) == 2){
                if(root->left != NULL && key<root->left->key){
                    root = LLR(root);
                }
                else{
                    root = RLR(root);
                }
            }
        }
        else if(root->key<key){
            root->right = Insert(root->right, root, key);
            int firstheight = 0;
            int secondheight = 0;
            if(root->left != NULL){
                firstheight = root->left->height;
            }
            if(root->right != NULL){
                secondheight = root->right->height;
            }
            if(abs(firstheight -secondheight) == 2){
                if(root->right != NULL && key<root->key){
                    root = RLR(root);
                }
                else{
                    root = LLR(root);
                }
            }
        }
        else{

        }
        Updateheight(root);
        return root;
    }
void printpreorder(struct AVLwithparent* root){
    cout<<"Node: "<<root->key<<", Parent Node: ";
    if(root->par != NULL){
        cout<<root->par->key<<endl;
    }
    else{
        cout<<"NULL"<<endl;
    }
    if(root->left != NULL){
        printpreorder(root->left);
    }
    if(root->right != NULL){
        printpreorder(root->right);
    }
}

int main(){
    struct AVLwithparent* root;
    root = NULL;
    root = Insert(root, NULL, 10);
    root = Insert(root, NULL, 20);
    root = Insert(root, NULL, 30);
    root = Insert(root, NULL, 40);
    root = Insert(root, NULL, 50);
    root = Insert(root, NULL, 25);
    printpreorder(root);
}