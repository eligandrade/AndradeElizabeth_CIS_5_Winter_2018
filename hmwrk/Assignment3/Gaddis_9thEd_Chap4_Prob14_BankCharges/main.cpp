/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 17, 2018, 1:20 PM
 * Purpose: Calculate Bank Charges
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float xtra, chksttl, total, blnce;
    int chks;
    
    //Initialize Variables
    cout<<"This Program will calculate the banks service fees."<<endl;
    cout<<"Please enter the beginning balance."<<endl;
    cin>>blnce;
        if(blnce<0){    //balance cannot be a negative number
             cout<<"ATTENTION: ACCOUNT IS OVERDRAWN."<<endl;
             exit(0);
         }
        if(blnce<400){  //balance gets charged a minimum service fee
            blnce=blnce-15;
        }
    cout<<"Enter the amount of checks written."<<endl;
    cin>>chks;
         if(chks<0){    //check number cannot be a negative number
             cout<<"Cannot accept negative numbers."<<endl;
             exit(0);
         }
               
    //Process/Map inputs to outputs
    if(chks<20){
      chksttl=.10*chks;           //number of checks < 20 is charged 10 cents
    }
    else if(chks>=20&&chks<=39){
        chksttl=.08*chks;         //number of checks 20-39 are charged 8 cents
    }
    else if(chks>=40&&chks<=59){
        chksttl=.06*chks;         //number of checks 40-59 are charged 6 cents
    }
    else {
        chksttl=.04*chks;         //number of checks >=60 is charged 4 cents
    }
    
    total=blnce-chksttl-10;         
    
    //Output data
    cout<<fixed<<setprecision(2);
    cout<<"Monthly service fee :            $ 10.00"<<endl;
    cout<<"Check service fee :              $  "<<chksttl<<endl;
    if (blnce<400){
        cout<<"Minimum balance fee:             $ 15.00"<<endl;
    }
    cout<<"New balance after service fees : $"<<total<<endl;
    
    
    //Exit stage right!
    return 0;
}