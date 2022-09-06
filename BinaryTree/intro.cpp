// first non linear data structure.

#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *buildTree()
{
    int d;
    cin >> d;
    if(d==-1){
        return;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void inOrderPrint(node* root){
    if(root->data==-1){
        return;
    }
    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
    return;
}
void print(node*root){
    if(root->data==-1){
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
    return;
}
void postorderPrint(node*root){
    if(root->data==-1){
        return;
    }
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout << root->data << "";
}

int main(){

    node *root = buildTree();

    print(root);

    return 0;
}