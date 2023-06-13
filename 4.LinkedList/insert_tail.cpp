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

void insert_tail_element(Node *&head,int val){

    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return ;
    }
    Node *tmp=head;
    while (tmp->next !=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    
}

void print_list(Node *head){
    Node *tt=head;
    while (tt !=NULL)
    {
        cout << tt->val << " ";
        tt=tt->next;
    }
    
}

int main(){
   Node *head=NULL;
   while (true)
   {
        cout << "Option 1: Insert a tail" << endl;
        cout << "Option 2: Print" << endl;
        cout << "Option 3: Terminate" << endl;
        int a;
        cin >> a;
        if(a==1){
            int c;
            cin >> c;
            insert_tail_element(head,c);
        }
        else if(a==2){
             print_list(head);
             cout << endl;
        }
        else if(a==3){
            break;
        }
       
   }
   
   
   return 0;
}