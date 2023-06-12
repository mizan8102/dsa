#include<iostream>
using namespace std;

// binary to decimal 
void binary_to_decimal(int n){
   int j=1,sum=0;
   while (n > 0)
   {
       int last=n%10;
       n=n/10;
       sum = sum+last*j;
       j=j*2;
   }
    cout << "Decimal value =" << sum;
}
// decimal to binary
void decimal_to_binary(int n){
    int i=0;
    int binary[32];
    while(n > 0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        cout << binary[j];
    } 
}
int main(){
    int n;
    cout << "Enter decimal value=";
    cin >> n;
    binary_to_decimal(n);
    return 0;
}