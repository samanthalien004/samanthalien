//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 3D
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
   string early, late;
   cout<< "Enter earlier date: ";
   cin>> early;

   cout<< "Enter later date: ";
   cin>>late;

   ifstream fin("Current_Reservoir_Levels.tsv");
   
   string junk;        
   getline(fin, junk); 

   double eastEl, westEl, eastSt, westSt ;
   int i, p;
   int step = 0;
   double arr[365];
   string myDate[365], date;

   while(fin >> date >> eastSt >> eastEl >>westSt >> westEl) {
      if(date >= early && date<= late){
         
         arr[step] = westEl;//elevation
         myDate[step]= date;//date
         step++;

         fin.ignore(INT_MAX, '\n');      
      }  
   }
   for(int i=step-1; i>=0; i--){
      cout<< myDate[i] << " "<< arr[i]<< " ft" << endl;
   }
      fin.close();
      return 0;
}

