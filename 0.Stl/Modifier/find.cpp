#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   vector<int>v2={34,532,53,53,5};
   auto a=find(v2.begin(),v2.end(),332);
   if(a == v2.end()) cout << "Not found" << endl;
   else cout << "found " << endl;
//    cout << *a << endl;
   return 0;
}