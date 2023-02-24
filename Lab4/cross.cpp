//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 4C
Asks the user to input the shape size
And prints a diagonal cross of that dimension.
*/

#include <iostream>
using namespace std;

int main(){
   int size, i, x;
   cout<< "Input size: ";
   cin>> size;

   cout<< "Shape: \n";

    for(x=1; x<=size; x++){    //h
      for( i=1; i<=size; i++){    //w
        if(x==i || i+x==size+1){
            cout<< "*";
          }else{
            cout<< " ";
           }
      }
      cout<<"\n";
    }
    return 0;  
  }

