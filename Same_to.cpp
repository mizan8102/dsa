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

    int size(){
        return sz;
    }

    bool empty(){
        return sz ==0? true : false;
    }
};

int main(){
    myQueue q;
      myStack ms;
   int n,m;
   cin >> n >> m;
   for (int i = 1; i <= n; i++)
   {
        int a;
        cin >> a;
        q.push(a);
   }

 

   for (int i = 0; i < m; i++)
   {
        int z;
        cin >> z;
        ms.push(z);
   }
    bool flag=true;
    if(n != m){
        flag=false;
    }else{
            while (!q.empty())
    {
        if( q.front() != ms.top()){
            flag=false;
            break;
        }
        ms.pop();
        q.pop();
    }
    }
   

    flag ? cout << "YES" << endl : cout <<  "NO" << endl ;
   return 0;
}