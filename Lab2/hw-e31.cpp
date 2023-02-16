/*
Samantha Lien
CSCI 135
Gennady Maryash
HW E3.1: Write a program that reads an integer and prints whether it is negative, zero, or positive.
*/

#include <iostream>
using namespace std;

int main(){
   int num;
   cout<< "Enter an integer: ";
   cin>> num;

   if(num<0)
   {
      cout<< "Negative";
      }
      else if(num>0){
      cout<< "Positive";
      }
      else if(num==0){
      cout<< "Zero";
   }
return 0;
}

