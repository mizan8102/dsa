#include<iostream>
using namespace std;

int main(){
   int rows=5,cols=4;
   for (int i = 0; i < rows; i++)
   {
       for (int j = 0; j < cols; j++)
       {
            if(i==0 || i==(rows-1)){
                cout << "*"; 
            }else if(j==0 || j==(cols-1)){
                 cout << "*"; 
            }else{
                cout << " ";
            }
       }
       cout << endl;
       
   }
   
   return 0;
}