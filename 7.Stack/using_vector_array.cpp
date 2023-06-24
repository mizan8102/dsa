#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class myStack{
    public:
        vector<int>v;
        void push(int val){
            v.push_back(val);
        }

        int top(){
            return v.back();
        }

        void pop(){
            v.pop_back();
        }

        int size(){
            return v.size();
        }

        bool isEmpty(){
            if(v.size()==0){
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