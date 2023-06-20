#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   vector<int>a(5);

   // copy from array 
   int ar[6]={1,2,3,4,5,6};
   vector<int> v(ar,ar+6);
   for(int i=0; i<v.size();i++){
    cout << v[i] << endl;
   }

//    cout << a.size() << endl;

   return 0;
}