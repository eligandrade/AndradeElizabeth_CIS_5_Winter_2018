/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 4, 2018, 12:40 PM
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
    float fedBudg, milBudg, percnt;
    
    //Initialize Variables
    fedBudg=4.1e12f;    //Federal Budget in US dollars 
    milBudg=640e9f;     //Military Budget in US dollars
    
    //Process/Map inputs to outputs
    percnt=milBudg/fedBudg*100;
    
    
    //Output data
    cout<<"If Federal Budget is "<<fedBudg<<endl;
    cout<<"and the Military Budget is "<<milBudg<<endl;
    cout<<"Then the percentage is "<<percnt<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}