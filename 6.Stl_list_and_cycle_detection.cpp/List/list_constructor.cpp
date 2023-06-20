#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
    // list <int> mylist2={23,43,33,2,45};
//     int ar[5]={4,23,43,53,2};
//    list<int> myList(ar,ar+5);
vector<int> v={54,23,53,234,64};
list<int> myList(v.begin(),v.end());
//    cout << myList.size() ;
  for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    }

    cout << " using contructor " << endl;
    for(int val:myList){
        cout << val << " ";
    }
    cout << endl;
   
   return 0;
}