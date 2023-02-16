/*
Samantha Lien
CSCI 135
Gennady Maryash
Lab 2c:Using arrays to store, update, and retrieve numbers.
*/
#include <iostream>
using namespace std;

int main(){
   int myData[10];
   for(int i=0; i<10; i++){
      myData[i]=1;
      cout<<myData[i]<<" ";
   }

   int index;
   int value;

   do{
      cout<< "\nInput index: ";
      cin>> index;

      cout<< "Input value: ";
      cin>> value;

      if(index>=0 && index<10){
         myData[index]=value;
         for(int j=0; j<10; j++){
            cout<<myData[j]<<" ";
   }
      }else{
        cout<< "Index out of range. Exit."; 
      }
   }while(index>=0 && index<10);

   return 0;
}