#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   stack<int> st;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
        int a;
        cin >> a;
        st.push(a);
   }

    cout << "output " << endl << endl;
   while (!st.empty())
   {
        cout << st.top() << endl;
        st.pop();
   }
   
   
   return 0;
}