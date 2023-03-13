//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 6B
Implements Caesar cipher encryption
*/

#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int rshift){
   char n;
   int i= (int)c;
   
   if((i+rshift>90 && i+rshift<97) || (i+rshift>122)){
      n= i-26+rshift;
   }else{
      n= i+rshift;
   }
     

   return n;
}

string encryptCaesar(string plaintext, int rshift){
   string word;
   for(int i=0; i< plaintext.length(); i++){

      int p= (int)plaintext[i];

      if((p>=65 && p<=90) ||(p>=97 && p<=122)){
         word= word+ shiftChar(plaintext[i], rshift);
      }else{
         word=word+ plaintext[i];
      }
      
   }
   return word;
}

int main(){
   string sentence;
   cout<< "Enter plaintext: ";
   getline(cin, sentence);

   int shift;
   cout<< "Enter shift: ";
   cin>> shift;

   cout<< "Ciphertext: \n"<< encryptCaesar(sentence, shift);

   return 0;
}