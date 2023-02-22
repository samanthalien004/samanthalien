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
   int size, i;
   cout<< "Input size: ";
   cin>> size;

   cout<< "Shape: \n";

    for(int x=0; x<size; x++){    //h
      for( i=0; i<size; i++){    //w
        if(x==i){
            cout<< "*";
           }else{
            cout<< " ";
           }
      }
      for(int p=size; p>x; p--){
        if(p==size+1){
            cout<<" ";
           }else{
            cout<< "*";
           }
      }
      cout<<"\n";
    }
    return 0;  
  }

