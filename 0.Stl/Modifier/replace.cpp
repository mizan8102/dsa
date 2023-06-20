#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   
   vector<int> ar={ 3,4,2,4,2,5,2,4,5};
   replace(ar.begin(),ar.end(),2,100);
   for(int i:ar){
    cout << i << " ";
   }
   return 0;
}