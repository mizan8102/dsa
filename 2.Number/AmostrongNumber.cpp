#include<iostream>
using namespace std;

int main(){
   int aa;
   cout << "Enter a Number =";
   cin >> aa;
   int reverse=0,n=aa;
   while( n > 0){
    int a=n%10;
    reverse +=(a*a*a);
    n=n/10;
   }
   if(aa==reverse){
    cout << "Amostrong Number " << endl;
   }else{
    cout << "NOt Amostrong" << endl;
   }
   
   return 0;
}