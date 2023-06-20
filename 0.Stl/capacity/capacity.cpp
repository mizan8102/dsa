#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   vector<int> v;
   cout << v.max_size() << endl;
   //capacity 
   cout << "Capacity=" << v.capacity() << endl;

   // push_back insert data
   v.push_back(12);
   for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
   }
   cout <<endl << "After Capacity =" << v.capacity() << endl; // capacity increase double if 8 value capacity would be 16
   cout << v.size() << endl;
   v.clear();

    for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
   }
   v.resize(2);
    cout << "after clear size=" << v.size() << endl;
   return 0;
}