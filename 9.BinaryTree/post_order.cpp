#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};

void postOrder(Node* root){
    if(root ==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}
int main(){
   
   Node *root=new Node(10);
   Node *b=new Node(20);
   Node *c=new Node(30);
   Node *d=new Node(40);
   Node *e=new Node(50);
   Node *f=new Node(60);
   Node *g=new Node(70);
   Node *h=new Node(80);
   Node *i=new Node(90);
   Node *j=new Node(100);

   //connection 
    root->left=b;
    root->right=c;

    b->left=d;
    b->right=j;

    c->right=e;
    e->left=h;
    e->right=g;

    h->left=i;

    d->right=f;
    postOrder(root);
   return 0;
}