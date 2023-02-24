// Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 4G
Asks the user to input width and height 
And prints a checkerboard of 3-by-3 squares
*/

#include <iostream>
using namespace std;

int main(){
   int w, h, i, x;
   cout<< "Input width: ";
   cin>> w;
   cout<< "Input height: ";
   cin>> h;

   cout<< "Shape: \n";

        
      for(x=1; x<=h; x++){
         if(x%6>0 && x%6<4){
             for(i=1; i<=w; i++){
               if(i%6>0 && i%6<4){
                  cout<< "*";
               }else{
                  cout<< " ";
               }
            }
         } else{
            for(i=1; i<=w; i++){
               if(i%6>0 && i%6<4){
                  cout<< " ";
               }else{
                  cout<< "*";
               }
            }
         }
         cout<< "\n";     
      }
     
      
   return 0;
}

