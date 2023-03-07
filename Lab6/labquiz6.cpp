//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab Quiz 6
*/

#include <iostream>
using namespace std;

int max3(int a, int b, int c){
   if(a>b){
      if(a>c){
         return a;
      }
   }
   if(b>a){
      if(b>c){
         return b;
      }
   }
   if(c>a){
      if(c>b){
         return c;
      }
   }

   return 0;
}

int main(){
   int a,b,c;
   cout<< "Enter 3 numbers: ";
   cin>> a >> b >> c;
   max3(a,b,c);

   return 0;
}