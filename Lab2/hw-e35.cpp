//Samantha Lien
/*CSCI 135
Gennady Maryash
HW E3.5 Prints a program that reads 3 numbers and establishes if it is increasing, decreasing or neither
*/
#include <iostream>
using namespace std;

int main(){
   int a, b, c;
   cout<< "Enter 3 numbers: ";
   cin>> a>> b>> c;

   if(a<b && b<c){
      cout<< "Increasing";
   }else if(a>b && b>c){
      cout<< "Decreasing";
   }else{
      cout<< "Neither";
   }

   return 0;
}