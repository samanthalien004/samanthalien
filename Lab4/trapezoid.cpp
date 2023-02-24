// Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 4F
Prints an upside-down trapezoid of given width and height
*/

#include <iostream>
using namespace std;

int main(){
   int w, h;
   cout<< "Input width: ";
   cin>> w;

   cout<< "Input height: ";
   cin>> h;


   if(2*h>w+1){
      cout<< "Impossible shape!";
   }else{
      cout<< "Shape: \n";
      for(int i=0; i<h; i++){
         for(int x=0; x<=i; x++){
            cout<< " ";
         }
         for(int i=0; i<w; i++){
            cout<< "*";  
         }
         w-=2;
         cout<< "\n";
      }
   }

   return 0;
}