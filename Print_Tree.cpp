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

void level_order(Node *root){
    queue<Node*> q;
    stack<Node*>st;
    q.push(root);
    while (!q.empty())
    {
        Node *f=q.front();
        q.pop();

        st.push(f);
        
        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
    }

   while (!st.empty()) {
        Node* node = st.top();
        st.pop();
        cout << node->val << " ";
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
        // ber kore niye aslam 
        Node *f =q.front();
        q.pop();

        // onno kaj 
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

        // children niye asa

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;

}
int main(){
   
    Node *root= input_level_order();
    level_order(root);

   return 0;
}