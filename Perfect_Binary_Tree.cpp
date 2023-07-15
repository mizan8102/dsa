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


int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

int count(Node* root){
    if(root == NULL) return 0;
    int l=count(root->left);
    int r=count(root->right);
    return l+r+1;
}
Node* input_level_order(){
    int val; 
    cin >> val;
    Node* root;

    if(val == -1) root=NULL;
    else root=new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    
    while (!q.empty())
    {
        Node *f =q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* left;
        Node* right;
        if(l != -1) left = new Node(l);
        else left=NULL;
        if(r != -1) right = new Node(r);
        else right = NULL;

        f->left = left;
        f->right = right;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;

}
int main(){
   
    Node *root= input_level_order();
    int maxH=maxHeight(root);
    int c=count(root);
    int totalNode= pow(2,maxH)-1;
    if(totalNode == c){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

   return 0;
}