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
class myStack{
    public:
        Node *head=NULL;
        Node *tail=NULL;
        int sz=0;
        void push(int val){
            Node *newNode=new Node(val);
            if(head==NULL){
                head = newNode;
                tail = newNode;
                return ;
            }
            tail->next=newNode;
            newNode->prev=tail;
            tail=tail->next;
            sz++;
        }

        void pop(){
            sz--;
           Node *deleteNOde= tail;
           tail=tail->prev;
           if(tail == NULL){
            head=NULL;
           }else{
             tail->next=NULL;
           }

           delete deleteNOde;

 
        }

        int top(){
            return tail->val;
        }

        int size(){
            return sz;
        }
        bool isEmpty(){
            if(sz==0){
                return true;
            }else{
                return false;
            }
        }
};
int main(){
   myStack ms;
   int x;
   cin >> x;
   for (int i = 0; i < x; i++)
   {
        int z;
        cin >> z;
        ms.push(z);
   }
   while (!ms.isEmpty())
   {
        cout << ms.top() << endl;
        ms.pop();
   }
   return 0;
}