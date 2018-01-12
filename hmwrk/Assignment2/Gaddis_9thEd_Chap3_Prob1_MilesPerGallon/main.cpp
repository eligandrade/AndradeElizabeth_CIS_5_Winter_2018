/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 7:45 PM
 * Purpose: Calculate Miles Per Gallon
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
    int miles, gallon, mpg;
    
    //Get gallons
    cout<<"Press enter after inputing your answer"<<endl;
    cout<<endl;
    cout<<"How gallons of gas can your car hold?"<<endl;
    cin>>gallon;
    
    //Get miles
    cout<<"How many miles can your car go on 1 tank of gas?"<<endl;
    cin>>miles;
    
    //Calculate MPG
    mpg=miles/gallon;
    
    //OutPut answer
    cout<<"Your car gets "<<mpg<<" miles per gallon"<<endl;
        
    
    //Exit stage right!
    return 0;
}