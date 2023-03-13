//Samantha Lien
/*CSCI 135
Gennady Maryash
HW 5.15
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
   if(a>b){
      int temp= a;
      a=b;
      b=temp;
      
   }
}

void sort3(int &a, int&b, int&c){
   sort2(a,b);
   sort2(a,c);
   sort2(b,c);
}

/*int main(){
   int a=3, b=4, c=1;

   sort3(a,b,c);

   cout<< a << b << c;

   return 0;
}*/


