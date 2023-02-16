/*
Samantha Lien
CSCI 135
Genady Maryash
Lab 2B
Prints all integers from requested interval
*/

#include <iostream>
using namespace std;

int main(){
    int low;
    int high;
    
    cout<< "Please enter L: ";
    cin>> low;
    cout<< "PLease enter U: ";
    cin>> high;
    
    for(int i=low; i<high; i++){
        cout<< i << " ";
    }
    
    return 0;
}