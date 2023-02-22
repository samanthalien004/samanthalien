//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 4D
Prints the bottom-left half of a square, given the side length.
*/

#include <iostream>
using namespace std;

int main(){
   int l;
   cout<< "Input side length: ";
   cin>> l;

   cout<< "Shape: \n";

   for(int i=0; i<l; i++){
      for(int x=0; x<=i; x++){
         cout<< "*";
      }
      cout<< "\n";
   }

   return 0;
}