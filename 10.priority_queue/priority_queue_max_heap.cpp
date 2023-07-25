#include <iostream>
using namespace std;

int main(){
    priority_queue<int> pq;
    while(true){
       int n;
        cin >> n;
        if(n==0){
          int a;
          cin >> a;
          pq.push(a);  // o(logN)
        }else if(n==1){
          pq.pop();  // o(logN)
        }else if(n==2){
          cout << pq.top() << endl; // o(1)
        }
    }
    return 0;
}