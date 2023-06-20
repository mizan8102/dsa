#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   vector<int>v={5,4,3,21,23};
   // v.pop_back();
   // v.insert(v.begin()+3,45);
   vector<int> v2={54,67,85,34};
   v.insert(v.end()-1,v2.begin(),v2.end());
   for(int i=0; i<v.size();i++){
    cout << v[i] << " " ;
   }
   return 0;
}