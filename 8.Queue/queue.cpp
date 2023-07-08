#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   queue<int> q;
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
        int a;
        cin >> a;
        q.push(a);
   }

    cout << endl << "Reslt --" << endl;
   while (!q.empty())
   {
    cout << q.front() << endl;
    q.pop();
   }
   return 0;
}