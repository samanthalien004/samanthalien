/*
Samantha Lien
CSCI 135
Genady Maryash
Lab 2A
Program continuously asks to re-enter until number is valid
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<< "Please enter an  integer: ";
    cin>> num;
    
    if(num>0 && num<100){
        cout<< "Number squared is: "<< num*num;
    }
    
    int n;
    while(num<=0 || num>=100){
        cout<< "Please re-enter: ";
        cin>>n; 
        num=n;
        cout<< "Number squared is: "<< n*n;
    }
   
    
    return 0;
}