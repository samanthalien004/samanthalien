/*
Samantha Lien
CSCI 135
Gennady Maryash
HW E2.10
*/
#include <iostream>
using namespace std;

int main()
{
    float gal;
    cout<<"The numbers of gallons of gas in the tank: ";
    cin>> gal;
    
    float fuel;
    cout<<"The fuel efficiency in miles per gallon: ";
    cin>> fuel;
    
    float price;
    cout<<"The price of gas per gallon: ";
    cin>> price;
    
    cout<< "The cost per 100 miles is "<< (100*(price*(1/fuel))) << "\n";
    cout<< "The car can go "<< (fuel*gal)<< " miles";

    return 0;
}