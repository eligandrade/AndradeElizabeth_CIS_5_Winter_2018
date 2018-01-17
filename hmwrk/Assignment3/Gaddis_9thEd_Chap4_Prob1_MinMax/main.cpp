/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 16, 2018, 8:30 PM
 * Purpose: Program to determine which number is larger
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, big, sm;
    
    //Get numbers
    cout<<"This program will tell you which number is bigger."<<endl;
    cout<<"Please enter 2 integers."<<endl;
    cin>>num1;
    cin>>num2;
    
    //Initialize Variables
    big = num1 > num2 ? num1 : num2 ; //Conditional Operator
    sm = num1 < num2 ? num1 : num2 ;
    
    
    //Output
    cout<<"The number "<<big<<" is greater than "<<sm<<endl;
           
    
    
    //Exit stage right!
    return 0;
}