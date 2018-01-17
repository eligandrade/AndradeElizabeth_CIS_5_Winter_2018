/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 16, 2018, 9:10 PM
 * Purpose: Calculating Seconds
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float secnds, answer;
    
    //input seconds
    cout<<"This program will calculate seconds."<<endl;
    cout<<"Please enter a number of seconds."<<endl;
    cin>>secnds;
    
    // if/else if statements 
    
    if      (secnds>=60&&secnds<3600)  { answer=secnds/60; 
    
        cout<<"There are "<<answer<<" minutes in "<<secnds<<"seconds"<<endl;
      }
    else if (secnds>=3600&&secnds<86400) { answer=secnds/3600;    
        cout<<"There are "<<answer<<" hours in "<<secnds<<"seconds"<<endl;
      }
    else if (secnds>=86400){ answer=secnds/86400; 
        cout<<"There are "<<answer<<" day(s) in "<<secnds<<"seconds"<<endl;
      }
    else  {  answer=secnds; 
        cout<<"That is "<<secnds<<" seconds"<<endl;
      } 
    
    
    //Exit stage right!
    return 0;
}