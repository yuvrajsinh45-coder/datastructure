#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* insert(Node *r, int x) {
    if(!r) return new Node{x,NULL,NULL};

    if(x < r->data)
        r->left=insert(r->left,x);
    else
        r->right=insert(r->right,x);

    return r;
}

void inorder(Node *r) {
    if(r) {
        inorder(r->left);
        cout << r->data << " ";
        inorder(r->right);
    }
}

void preorder(Node *r) {
    if(r) {
        cout << r->data << " ";
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(Node *r) {
    if(r) {
        postorder(r->left);
        postorder(r->right);
        cout << r->data << " ";
    }
}

int main() {
    Node *root=NULL;
    int a[]={50,30,70,20,40,60,80};

    for(int x:a)
        root=insert(root,x);

    cout<<"Inorder: ";
    inorder(root);

    cout<<"\nPreorder: ";
    preorder(root);

    cout<<"\nPostorder: ";
    postorder(root);
}