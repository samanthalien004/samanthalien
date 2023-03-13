//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 7 Quiz
Removes "e" from the string
*/

#include <iostream>
#include <string>
using namespace std;

void remove_e(string s){
   string newWord;
   for(int i=0; i<s.length(); i++){
      if(s.substr(i,1)!="e"){
          newWord = newWord + s.substr(i,1);
      }
   }
}

int main(){
   string s= "elephant";
   remove_e(s);
   
   return 0;
}