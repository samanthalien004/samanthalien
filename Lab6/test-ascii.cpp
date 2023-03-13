//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 6A
Program should report all characters from the input line
together with their ASCII codes
*/

#include <iostream>
using namespace std;

int main(){
   string c;
   cout<< "Enter a line of text: ";
   getline(cin, c);

   for(int i=0; i<c.length();i++){
      cout<< c[i] << " " << (int)c[i]<< endl;
   }

   return 0;
}