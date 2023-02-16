/* 
Samantha Lien
CSCI 135
Genady Maryash
Lab 1 B
*/

#include <iostream>
using namespace std;

int main()
{
   int first;
    cout<< "Enter the first number: ";
    cin>> first;
    
    int sec;
    cout<< "Enter the second number: ";
    cin>> sec;
    
    int third;
    cout<< "Enter the third number: ";
    cin>> third;
    
    if (first<sec){
        if(first<third){
            cout<< "The smaller of the three is "<< first;
        }
    }
    if(sec<first){
        if(sec< third){
           cout<< "The smaller of the three is "<< sec; 
        }
    }
    if(third<first){
        if(third<sec){
            cout<< "The smaller of the three is "<< third;
        }
    }
     
     return 0;   
}