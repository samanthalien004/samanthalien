//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 4 Quiz
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
          ifstream fin("data.txt");
          if (fin.fail()) {
            cerr << "File cannot be opened for reading." << endl;
            exit(1); 
         }
         

         string color, hex;
         
         while(fin>>color>>hex) { 
   
    
                  fin.ignore(INT_MAX, '\n'); 
    
                  cout << color << " "<< hex<< endl;
}
      fin.close();
}