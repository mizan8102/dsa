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
int count(Node* root){
    if(root == NULL) return 0;
    int l=count(root->left);
    int r=count(root->right);
    return l+r+1;
}

int countLeafNode(Node* root){
    if(root == NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }else{
         int l=countLeafNode(root->left);
    int r=countLeafNode(root->right);
    return l+r;
    }
   
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
//    cout << " count value =" << count(root) << endl;
   cout << " count value =" << countLeafNode(root) << endl;
   return 0;
}