//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 3A
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
  string i;
  cout<< "Enter date: ";
  cin>> i;

   ifstream fin("Current_Reservoir_Levels.tsv");
   if (fin.fail()) {
         cerr << "File cannot be opened for reading." << endl;
         exit(1); 
   }
  
   string junk;        
   getline(fin, junk); 

         string date;
         double eastSt, eastEl, westSt, westEl;
         while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    
    
                  fin.ignore(INT_MAX, '\n');
                  
                  if(date==i){
                      cout << "East basin storage: " << eastSt << " billion gallons\n";  
                  }

            }

      fin.close();
}


