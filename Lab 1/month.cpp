/*
Samantha Lien
CSCI 135
Gennady Maryash
Lab 1D
Program that prints number of days in a month
*/
#include <iostream>
using namespace std;

int main(){
   int year;
   cout<< "Enter year: ";
   cin>> year;

   int mon;
   cout<< "Enter month: ";
   cin>> mon;

   if(mon!=2 && mon<8){
        if(mon%2==1){
            cout<< "31 days";
        }
        else{
            cout<< "30 days";
        }
   }
   else if (mon!=2){
       if(mon%2==0){
           cout<< "31 days";
       }
       else{
           cout<< "30 days";
       }
   }
    if(mon==2 && year%4!=0){
       cout<< "28 days";
   }
   else if(mon==2 && year%100!=0){
       cout<< "29 days";
   }
   else if(mon==2 && year%400!=0){
       cout<< "28 days";
   }
   else if (mon==2){
       cout<< "29 days";
   }
   return 0;
}