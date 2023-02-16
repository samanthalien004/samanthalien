//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 3B
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
   ifstream fin("Current_Reservoir_Levels.tsv");
   if (fin.fail()) {
         cerr << "File cannot be opened for reading." << endl;
         exit(1); 
   }
  
   string junk;        
   getline(fin, junk); 
         
         double j=100.0, i = 0.0;
         string date;
         double eastSt;
         while(fin >> date >> eastSt) { 
    
                  fin.ignore(INT_MAX, '\n');

                  
                  if(i<eastSt){
                        i=eastSt;
                  }
                  else if(j>eastSt){
                        j=eastSt;
                  }
                     }   
            
            cout<< "MAXimum storage in East Basin: "<< i << " billion gallons\n";
            cout<< "Minimum storage in East Basin: "<< j << " billion gallons\n";
                     
       fin.close();
}
                   
     
