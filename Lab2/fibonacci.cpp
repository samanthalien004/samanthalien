/*
Samantha Lien
CSCI 135
Gennady Maryash
Lab 2d:Computing Fibonacci Numbers with Loops and Arrays
*/
#include <iostream>
using namespace std;

int main(){
   int fib[60];
   fib[0]=0;
   fib[1]=1;

   for(int i=2; i<=61; i++){
     fib[i]=fib[i-1] + fib[i-2];
     cout<< fib[i-2]<< "\n";
   }

   return 0;
}
