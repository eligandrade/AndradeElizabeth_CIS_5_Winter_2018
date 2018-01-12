/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 10:30 PM
 * Purpose: Create a CSC/CIS 5 Template
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
    float test1, test2, test3, test4, test5, sum, avg;
    
   //Get Test Scores
    cout<<"Perss enter after inputing grade"<<endl;
    cout<<"What is the test score of the 1st test? %";
    cin>>test1;
    cout<<"What is the test score of the 2nd test? %";
    cin>>test2;
    cout<<"What is the test score of the 3rd test? %";
    cin>>test3;
    cout<<"What is the test score of the 4th test? %";
    cin>>test4;
    cout<<"What is the test score of the 5th test? %";
    cin>>test5;
    
    //Calculate average
    sum = test1 + test2 + test3 + test4 + test5;
    avg=sum/5;      //There are 5 Test scores
    
    //Output
    cout<<endl;
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Your average test score is %"<<avg<<endl;
    
    //Exit stage right!
    return 0;
}