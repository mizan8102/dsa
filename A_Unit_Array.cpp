#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
     int c;
     cin >> c;
     vector<int>ar(c);
     for (int j = 0; j < c; j++)
     {
        cin >> ar[j];
     }
    int sum, prod, trak = 0, ff = 0;
    while (c > trak)
    {
       sum = 0, prod = 1;
       for(int j = 0; j < c; j++){
           sum += ar[j];
           prod *= ar[j];
       }
       if(sum >= 0 && prod == 1){
           break;
       }
       else{
           if(c > ff){
               ar[ff] = (ar[ff] == 1) ? -1 : 1;
               if(ff !=0){
                ar[ff-1] = (ar[ff-1] == 1) ? -1 : 1;
               }
               ff++;
               trak = 0;
           }
           else{
            ar[c-1] = (ar[c-1] == 1) ? -1 : 1;
             
               ar[trak] = (ar[trak] == 1) ? -1 : 1;
           }
       }
       trak++;
    }
    cout << trak << endl;     
   }
   return 0;
}
