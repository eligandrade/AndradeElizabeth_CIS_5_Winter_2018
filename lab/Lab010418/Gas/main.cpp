/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 4, 2018, 1:10 PM
 * Purpose:  Military Budget
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float fedtax, sttax, saltax, oilcom, gallns, poil, pgov;
    
    //Initialize Variables
    fedtax=.184;    //federal tax in cents per gallon
    sttax=.36;      //state tax in cents per gallon
    saltax=.22;     //sales tax in cents per gallon
    oilcom=.189;    //oil company profit in cents per gallon
    gallns=2.75;    //price of 1 gallon
    
    //Process/Map inputs to output
    poil=oilcom/gallns*100;
    pgov=(fedtax + sttax + saltax)/gallns*100;
    
    
    //Output data
    cout<<"The federal tax from one gallon of gas is "<<fedtax<<endl;
    cout<<"The state tax from one gallon of gas is "<<sttax<<endl;
    cout<<"The sales tax from one gallon of gas is "<<saltax<<endl;
    cout<<"One gallon of gas costs $"<<gallns<<endl;
    cout<<"The government makes "<<pgov<<"% profit from one gallon of gas"<<endl;
    cout<<"The oil company makes "<<poil<<"% profit from one gallon of gas"<<endl;
    
    //Exit stage right!
    return 0;
}