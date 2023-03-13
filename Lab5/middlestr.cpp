//Samantha Lien
/*CSCI 135
Gennady Maryash
HW 5.6
*/

#include <iostream>
using namespace std;

string middle (string str){
   string mid;
   if(str.length()%2==0){
      mid= mid+ str[str.length()/2-1]+ str[str.length()/2];
   }else{
      mid= str[str.length()/2];
   }

   return mid;
}

/*int main(){
   string str;
   cout<< "Enter a word: ";
   cin>> str;

   cout<< middle(str);
}*/