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
    list<int> l;
    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    int size(){
        return l.size();
    }

    bool empty(){
        return l.empty();
    }
    int front(){
        return l.front();
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

// circular array using array queue