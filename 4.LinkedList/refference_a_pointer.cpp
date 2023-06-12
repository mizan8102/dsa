#include<bits/stdc++.h>

#include<iostream>
using namespace std;

void fun(int *&pt){
    pt=NULL;
}
int main(){
   int ptr=23;
    int *val=&ptr;
    fun(val);
    cout << *val << endl;
   return 0;
}