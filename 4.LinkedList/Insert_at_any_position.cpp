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

void insert_at_tail(Node *&head,int val){
    Node *newNode=new Node(val);
    if(head == NULL){
        head=newNode;
        cout << " insert at head" << endl;
        return;
    }
    Node *temp=head;
    while (temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
}

void print_linked_list(Node *head){
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout <<  tmp->val << " ";
        tmp=tmp->next;
    }
    cout << endl;
    
}

// insert value a specific position 
void insert_specific_position(Node *head, int position , int val){

    Node *tmp=head;
    Node *newNode=new Node(val);
    for (int i = 1; i < position-1; i++)
    {
        tmp=tmp->next;
        cout << i << endl;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout << "insert " << position << endl;

    
}
int main(){
   Node *head=NULL;
   while (true)
   {
        cout << "Option 1: Insert a tail" << endl;
        cout << "Option 2: Insert at position :" << endl;
        cout << "Option 3: Print" << endl;
        cout << "Option 4: Terminate" << endl;
        int a;
        cin >> a;
        if(a==1){
            int val;
            cin >> val;
            insert_at_tail(head,val);
        }else if(a==2){
            int position,val;
            cin >> position >> val;
            insert_specific_position(head,position,val);
        }else if(a==3){
             print_linked_list(head);
        }else if(a==4){
            break;
        }
       
   }
   
   return 0;
}