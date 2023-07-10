#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   stack<int> st;
   queue<int>qu;
   int n,m;
   cin >> n >> m;
   for (int i = 0; i < n; i++)
   {
        int a;
        cin >> a;
        st.push(a);
   }

    for (int i = 0; i < m; i++)
   {
        int a;
        cin >> a;
        qu.push(a);
   }

  bool flag=true;
    if(n != m){
        flag=false;
    }else{
            while (!qu.empty())
    {
        if( qu.front() != st.top()){
            flag=false;
            break;
        }
        st.pop();
        qu.pop();
    }
    }
   

    flag ? cout << "YES" << endl : cout <<  "NO" << endl ;
    
   return 0;
}