//Samantha Lien
/*CSCI 135
Gennady Maryash
Lab 5
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){     //task A: checks if is n is divisible by d
   if(d==0){                          //you can't divide a number by zero
      return false;
   }
   if(n%d==0){
      return true;
   }else{
      return  false;
   }
}

bool isPrime(int n){                   //task B: checks if n is prime
   int count=0;
   for(int i=1; i<=n; i++){
      if(n%i==0){
         count++;
      }
   }
   if (count>2 || n<=1){               //count checks if n has more than two factors
      return false;                    //n<=1 because negative numbers cannot be prime
   } else{
      return true;
   }
}

int nextPrime(int n){
   int x=n;
      while(true){                  // task C: continually goes through all the numbers as x increments by 1
         x++;                       
         if(isPrime(x)==true){
            return x;               //until isPrime(x) is true and then it returns that value x
         }
      }
      
   }
   
int countPrimes(int a, int b){
   int count=0;
   for(int i=a; i<=b; i++){            //task D: increments counter by 1 as it loops from a to b
      if(isPrime(i)==true){
         count++;
      }
   }

   return count;
}

bool isTwinPrime(int n){
   if(isPrime(n)==true){
      if(isPrime(n-2)==true || isPrime(n+2)==true){      //task E: checks if the number 2 less and greater are also prime
         return true;
      }else{
         return false;
      }
   }else{
      return false;
   }
}

int nextTwinPrime(int n){                       //task F: performs like task C
   int t=n;
   while(true){
      t++;
      if(isTwinPrime(t)==true){
         return t;
      } 
   }
}

int largestTwinPrime(int a, int b){             //task G:
   int largest=-1;                              // if isTwinPrime(i) remains false during the loop
   for(int i=a; i<=b; i++){                     // largest will remain its default value -1
      if(isTwinPrime(i)==true){                 // otherwise it will update to i
         largest=i;
      }
   }
   return largest;
}


int main(){
   /*int n, d;
   cout<< "Enter 2 integers: ";
   cin>> n>> d;
   cout<< isDivisibleBy(n,d)*/

   /*int p;
   cout<< "Enter an integer: ";
   cin>> p;
   cout<< isPrime(p);

   cout<< nextPrime(p);*/

   /*int x, y;
   cout<< "Enter 2 integers: ";
   cin>> x>> y;
   cout<< countPrimes(x,y);*/

   /*int g;
   cout<< "Enter a number: ";
   cin>> g;
   cout<< isTwinPrime(g)<< endl;

   cout<< nextTwinPrime(g);*/

   int k,l;
   cout<< "Enter two integers: ";
   cin>> k>> l;
   cout<< largestTwinPrime(k,l);


   return 0;
}