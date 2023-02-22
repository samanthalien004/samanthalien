//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 4B
Asks the user to input width and height 
and prints a rectangular checkerboard of the requested size
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

   for(int x=1; x<=h; x++){
      if(x%2==1){
         for(int i=1; i<=w; i++){
            if(i%2==1){
            cout<< "*";
            }
            else if(i%2==0){
            cout<< " ";
             }
         }    
      } else if(x%2==0){
         for(int i=1; i<=w; i++){
            if(i%2==1){
            cout<< " ";
            }
            else if(i%2==0){
            cout<< "*";
            }
         }
      }
      cout<< "\n";
   }
   return 0;
}
