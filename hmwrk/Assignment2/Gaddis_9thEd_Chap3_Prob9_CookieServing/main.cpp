/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 6:20 PM
 * Purpose: To calculate how many calories in cookies
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
    int cookies, cal;
    
    //Get how many cookies
    cout<<"Press Enter after inputing a number."<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookies;
    cout<<endl;
    cout<<"you have entered "<<cookies<<endl;
    
    //Calculate how many calories 
    cal=cookies*100;     //There are 100 calories in 1 cookie
     
    //output
    cout<<endl;
    cout<<"There are "<<cal<<" calories in "<<cookies<<" cookies."<<endl;
           
    
    //Exit stage right!
    return 0;
}