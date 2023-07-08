#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

class myQueue{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail=tail->next;
    }

    void pop(){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;
    }

    int front(){
        return head->val;
    }

    bool empty(){
        return sz ==0? true : false;
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