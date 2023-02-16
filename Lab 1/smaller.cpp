/*
Samantha Lien
CSCI 135
Genady Maryash
Lab 1 A
*/

#include <iostream>
using namespace std;

int main(){ 
    int first;
    cout<< "Enter the first number: ";
    cin>> first;
    
    int sec;
    cout<< "Enter the second number: ";
    cin>> sec;
    
    if (first<sec){
        cout<< "The smaller of the two is "<< first;
    }
    else{
        cout<< "The smaller of the two is "<< sec;
    }
    
    return 0;
}