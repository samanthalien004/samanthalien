//Samantha Lien
/*CSCI 135
Gennady Maryash
HW E4.8 Character per line
*/
#include <iostream>
using namespace std;

int main(){
   string name;
   cout<< "Enter a name: ";
   cin>> name;

   for(int j=1; j<=name.length(); j++){
      cout<< name[j-1]<<"\n";
   }

   return 0;
}