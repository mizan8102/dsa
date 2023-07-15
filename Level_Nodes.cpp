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

void level_order(Node *root,int a){
    queue< pair<Node*,int>> q;
    q.push({root,0});
    int level=0;
    while (!q.empty())
    {
        pair<Node *,int>f=q.front();
        q.pop();
        Node *pr=f.first;
        level =f.second;

        if(level == a){
             cout << pr->val << " ";
        }
       
        if(pr->left) q.push({pr->left,level+1});
        if(pr->right) q.push({pr->right, level+1});
    }

    if(level<a){
        cout << "Invalid" << endl;
       }

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
    int a;
    cin >> a;
    level_order(root,a);

   return 0;
}