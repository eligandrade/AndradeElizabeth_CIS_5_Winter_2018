/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 5, 2018, 10:00 PM
 * Purpose: Finding the sum and product of 2 numbers
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
    int a, b, sum, pro;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    
    //Output data
    cout<<"This program will give you the sum and product of 2 numbers"<<endl;
    cout<<"Enter only whole numbers"<<endl;
    cout<<"Press enter after entering a number"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"You have entered "<<a<<endl;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"You have entered "<<b<<endl;
    
    sum=a+b;
    pro=a*b;
    
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    cout<<a<<" x "<<b<<" = "<<pro<<endl;        
    //Exit stage right!
    return 0;
}