#include <iostream>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    while (true)
    {
      int n;
      if(n==0){
        int a;
        cin >> a;
        pq.push(a);
      }else if(n==1){
        pq.pop();
      }else if(n==2){
        cout << pq.top() << endl;
      }
    }
    
    return 0;
}