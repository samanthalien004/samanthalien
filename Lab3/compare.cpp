//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 3C
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
   string start, end;
   cout<< "Enter starting date: ";
   cin>> start;

   cout<< "Enter ending date: ";
   cin>>end;

   ifstream fin("Current_Reservoir_Levels.tsv");
   
   string junk;        
   getline(fin, junk); 

   string date;
   double eastEl, westEl, eastSt, westSt ;
   
   while(fin >> date >> eastSt >> eastEl >>westSt >> westEl) {
      if(date >= start && date<= end){
            if(eastEl< westEl){
               cout<<  date<< " West"<< endl;
            }
            else if(westEl<eastEl){
               cout<< date << " East"<< endl;
            }
            else if(westEl==eastEl){
               cout<< date << " Equal"<< endl;
            }
         }
      
      fin.ignore(INT_MAX, '\n');      
   }  
   fin.close();
   return 0;
}


