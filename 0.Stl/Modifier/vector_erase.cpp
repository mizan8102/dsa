#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   vector<int>v={3,43,5,64,23};
  
   for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
   } 
   v.erase(v.begin()+3);
   cout << endl;
   for(int s:v){
    cout << s << " ";
   }
   return 0;
}