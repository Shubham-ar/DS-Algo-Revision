// first non linear data structure.

#include<iostream>
#include<queue>
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
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) + 1;
}

int levelOrderPrint(node*root){
    int H = height(root);
    for (int i = 0; i < H; i++)
    {
        printKthLevel(root,i);
    }
}  

void printKthLevel(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout << root->data << " ";
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
}

void bfs(node*root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if(temp->left){
        q.push(temp->left);
        }
        if(temp->right){
        q.push(temp->right);
        }
    }
    return;
}
// approach2- by using a queue of pairs of type <node*,int>
// approach3-. adding null to the queue and printing a endl variable whenever a null variable is encountered
// approach3- adding a null character to the queue whenever a linechange is req, and printing endl whenever that null charaacter is encountered

void bfs(node*root){
    queue<node *> queue;
    queue.push(root);
    queue.push(NULL);

    while (!queue.empty())
    {
        node *temp = queue.front();
        if(temp==NULL){
            cout << endl;
            queue.pop();
            if(!queue.empty()){
            queue.push(NULL);
            }
        }else{
        cout << temp->data << " ";
        queue.pop();
        if(temp->left){
            queue.push(temp->left);
        }
        if(temp->right){
            queue.push(temp->right);
        }
        }
    }
    return;
}

int count_nodes(node*root){

    if(root==NULL){
        return 0;
    }
    int ls = count_nodes(root->left);
    int rs = count_nodes(root->right);
    return ls + rs + 1;
}

int sum_allnodes(node*root){

    if(root==NULL){
        return 0;
    }
    int ls = sum_allnodes(root->left);
    int rs = sum_allnodes(root->right);
    return root->data + ls + rs;
    }

// it is the longest distance between any 2 nodes in the tree
int diameter(node*root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1 + h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1,max( op2, op3));
}
int main(){

    node *root = buildTree();

    print(root);

    return 0;
}