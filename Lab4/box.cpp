//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 4A
Asks the user to input width and height 
And prints a solid rectangular box of the requested size
*/

#include <iostream>
using namespace std; 

int main(){
   int w, h;
   cout<< "Input width: ";
   cin>> w;

   cout<< "Input height: ";
   cin>> h;

   cout<< "Shape: \n";

   for(int x=0; x<h; x++){
      for(int i=0; i<w; i++){
         cout<< "*";
   }
      cout<<"\n";
   }
   

   return 0;
}