#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};

class myQueue{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val){
        Node *newNode = new Node(val);
        sz++;
        if(head == NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail = tail->next;
        
    }

    void pop(){
        sz--;
        Node *deleteNode=head;
        head=head->next;
        if(head == NULL){
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->prev =NULL;
        delete deleteNode;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return size()==0 ? true: false;
    }
    int front(){
        return head->val;
    }
};
int main(){
   
    
   myQueue q;
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
        int a;
        cin >> a;
        q.push(a);
   }

    cout << endl << "Reslt --" << endl;
   while (!q.empty())
   {
    cout << q.front() << endl;
    q.pop();
   }
   return 0;
}