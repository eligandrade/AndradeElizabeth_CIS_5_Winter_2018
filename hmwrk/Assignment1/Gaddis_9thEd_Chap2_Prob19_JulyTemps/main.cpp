/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 5, 2018, 8:55 PM
 * Purpose: Create a CSC/CIS 5 Template
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
    float ny, ny2,              //New York
          dnv, dnv2,            //Denver     
          phnx, phnx2,          //Phoenix 
          percnt,               //Percent temp increase
          inc, inc2, inc3;      //Increase in temp
    
    //Initialize Variables
    ny=85;      //New York temp in Fahrenheit
    dnv=88;     //Denver  temp in Fahrenheit
    phnx=106;   //Phoenix temp in Fahrenheit
    percnt=.02; //Percent temp increase *100
    
    //Process/Map inputs to outputs
    inc=ny*percnt;
    inc2=dnv*percnt;
    inc3=phnx*percnt;
    ny2=inc+ny;
    dnv2=inc2+dnv;
    phnx2=inc3+phnx;
            
    //Output data
    cout<<"In July the average rainfall in these cities are as follows:"<<endl;
    cout<<"New York : "<<ny<<" degrees Fahrenheit"<<endl;
    cout<<"Denver : "<<dnv<<" degrees Fahrenheit"<<endl;
    cout<<"Phoenix : "<<phnx<<" degrees Fahrenheit"<<endl;
    cout<<"This year there was a 2% increase in temperature"<<endl;
    cout<<"That would make the new averages for July as follows:"<<endl;
    cout<<"New York : "<<ny2<<" degrees Fahrenheit"<<endl;
    cout<<"Denver : "<<dnv2<<" degrees Fahrenheit"<<endl;
    cout<<"Phoenix : "<<phnx2<<" degrees Fahrenheit"<<endl;
    
    //Exit stage right!
    return 0;
}