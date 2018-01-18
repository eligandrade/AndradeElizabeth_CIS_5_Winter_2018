/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11th, 2018, 1:15 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Menu with input of choice
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Problem 1 -> Gaddis_9thEd_Chap4_Prob11_MathTutor"<<endl;
    cout<<"Problem 2 -> Savitch_9thEd_Chap3_Prob6_Finonacci"<<endl;
    cout<<"Problem 3 -> Savitch_9thEd_Chap3_Prob7_etox"<<endl;
    cout<<"Problem 4 -> Gaddis_9thEd_Chap4_Prob1_MinMax"<<endl;
    cout<<"Problem 5 -> Gaddis_9thEd_Chap4_Prob7_Time"<<endl;
    cout<<"Problem 6 -> Savitch_9thEd_Chap3_Prob1_PhoneCall"<<endl;
    cout<<"Problem 7 -> Gaddis_9thEd_CHap4_Prob15_Shipping"<<endl;
    cout<<"Problem 8 -> Gaddis_9thEd_Chap4_Prob14_BankCharges"<<endl;
    cout<<"Problem 9 -> Gaddis_9thEd_Chap4_Prob_23_Geometry"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
            {
            //Set the random number
            srand (static_cast<unsigned int>(time(0)));
            //Declare Variables
            unsigned short op1, op2, answer, result; 

            //Initialize Variables
            op1=rand()%900+100; //Three digit number
            op2=rand()%1000;    //Any 1 to 3 digit number

            //Process/Map inputs to outputs
            result=op1+op2;

            //Output data
            cout<<"Test your addition skills, solve the following."<<endl;
            cout<<setw(5)<<op1<<endl;
            cout<<"+ "<<setw(3)<<op2<<endl;
            cout<<"-----"<<endl<<(result>1000?" ":"  ");
            cin>>answer;
            cout<<(result==answer?"Correct":"Incorrect")<<endl;
        }
            break;
        }    
        case 2: {
            //Declare Variables
            unsigned int fi, fim1, fim2;

             //Initialize Variables
             fim1=1;
             fim2=1;
             cout<<fim2<<","<<fim1;

             //Process/Map inputs to outputs
             fi=fim1+fim2;
             cout<<","<<fi;
             fim2=fim1;
             fim1=fi;

             //Process/Map inputs to outputs
             fi=fim1+fim2;
             cout<<","<<fi;
             fim2=fim1;
             fim1=fi;

             //Process/Map inputs to outputs
             fi=fim1+fim2;
             cout<<","<<fi;
             fim2=fim1;
             fim1=fi;

             //Process/Map inputs to outputs
             fi=fim1+fim2;
             cout<<","<<fi;
             fim2=fim1;
             fim1=fi;

             //Process/Map inputs to outputs
             fi=fim1+fim2;
             cout<<","<<fi;
             fim2=fim1;
             fim1=fi;

             //Process/Map inputs to outputs
             fi=fim1+fim2;
             cout<<","<<fi;
             fim2=fim1;
             fim1=fi;

             //comparison of the ratio of Fibonacci to Golden Ratio
             cout<<"      Ratio = "<<1.0f*fim1/fim2<<endl;
            
            break;
        }
        case 3: {
            //Declare Variables
            float aproxE, term, x;
            int counter;

            //Initialize Variables
            aproxE=1.0f;
            counter=1;
            x=1.0f;
            term=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Output data
            cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
            
            break;
        }
        case 4: {
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
            
            break;
        }
        case 5: {
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
            
            break;
        }
        case 6: {
            //Declare Variables
            unsigned short cost,       //Cost of Phone call in pennies
                           strTime,    //Start time in military format
                           tmSpan;     //Duration of Phone Call
            char day,  //Day of Week 
                 dm;   //Dummy input 

            //Initialize Variables
            cout<<"Calculate cost of phone call"<<endl;
            cout<<"Input the day the phone call was made"<<endl;
            cout<<"Mo Tu We Th Fr Sa Su"<<endl;
            cin>>day>>dm;
            cout<<"Input the start time in military format"<<endl;
            cout<<"1:30 PM = 13:30"<<endl;
            cin>>setw(2)>>strTime>>dm>>dm>>dm;
            cout<<"Input the duration of phone call in minutes"<<endl;
            cin>>tmSpan;

            //Process/Map inputs to outputs
            if(day=='S'||day=='s'){
                cost=tmSpan*15;//15 cents per minute
            }else if(strTime>=8&&strTime<18){
                cost=tmSpan*40;//40 cents per minute
            }else{
                cost=tmSpan*25;//25 cents per minute
            }


            //Output data
            cout<<fixed<<setprecision(2);
            cout<<"The phone call cost = $"<<cost/100.0f<<endl;
            
            break;
        }
        case 7: {
            //Declare Variables
            float cost, wght, dist;

            //Initialize Variables
            cout<<"This program calculates shipping costs."<<endl;
            cout<<"Enter the weight of the package in kg."<<endl;
            cin>>wght;
            if(wght<=0||wght>20){   //weight cannot be negative or above 20kg
                cout<<"Fast Freight Shipping does not accept weights"
                    <<" under 0kg or over 20kg."<<endl;
                exit(0);
            }
            cout<<"Enter the distance it is going in miles."<<endl;
            cin>>dist;
            if(dist<10||dist>3000){ //distance cannot be <10 or over 3000 miles
                cout<<"Fast Freight Shipping does not accept distances "
                    <<"less than 10 miles or greater than 3,000 miles."<<endl; 
                exit(0);
            }

            //Process/Map inputs to outputs
            if (wght<2){
                cost=1.10*(dist/500);       //packages <2kg are charged
            }                               //$1.10 per 500 miles
            else if (wght>=2&&wght<6) {
                cost=2.20*(dist/500);       //packages 2kg-5.99kg are charged
            }                               //$2.20 per 500 miles
             else if (wght>=6&&wght<10) {
                cost=3.70*(dist/500);       //packages 6kg-9.99kg are charged
            }                               //$3.70 per 500 miles
             else {
                 cost=4.80*(dist/500);      //packages 10kg-20kg are charged
            }                               //$4.80 per 500 miles


            //Output data
            cout<<fixed<<setprecision(2);
            cout<<"It will cost $"<<cost<<" to ship that package."<<endl;
            
            break;
        }
        case 8: {
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
              chksttl=.10*chks;           //number of checks < 20 is 
            }                             //charged 10 cents
            else if(chks>=20&&chks<=39){
                chksttl=.08*chks;         //number of checks 20-39 are 
            }                             //charged 8 cents
            else if(chks>=40&&chks<=59){
                chksttl=.06*chks;         //number of checks 40-59 are 
            }                             //charged 6 cents
            else {
                chksttl=.04*chks;         //number of checks >=60 is 
            }                             //charged 4 cents

            total=blnce-chksttl-10;         

            //Output data
            cout<<fixed<<setprecision(2);
            cout<<"Monthly service fee :            $ 10.00"<<endl;
            cout<<"Check service fee :              $  "<<chksttl<<endl;
            if (blnce<400){
                cout<<"Minimum balance fee:             $ 15.00"<<endl;
            }
            cout<<"New balance after service fees : $"<<total<<endl;
            
            break;
        }
        case 9: {
            //Declare Variables
            int task;

           //Menu with choices
            cout<<"Geometry Calculator"<<endl;
            cout<<"   1. Calculate the Area of a Circle"<<endl;
            cout<<"   2. Calculate the Area of a Rectangle"<<endl;
            cout<<"   3. Calculate the Area of a Triangle"<<endl;
            cout<<"   4. Quit"<<endl;
            cout<<"Enter your choice (1-4):"<<endl;
            cin>>task;
            if(task<1||task>4){ //Only number 1-4 are valid
                cout<<"ERROR: ONLY NUMBERS 1-4 ARE VALID"<<endl;
                exit(0);
            }

            //Output the results
            switch (task) {
                case 1: {
                    //Declare Variables
                    const float PI=3.14159;
                    float radius, area;

                    //Get Variables
                    cout<<"You chose to calculate the Area of a circle."<<endl;
                    cout<<"Enter the radius of the circle."<<endl;
                    cin>>radius;
                    if (radius<=0){ //Cannot be a negative number or have no value
                        cout<<"Invalid Input"<<endl;
                        exit(0);
                    }

                    //Map inputs to Outputs
                    area=PI*(radius*radius);    //formula for area of circle

                    //Output
                    cout<<"The area of that circle is "<<area<<endl;

                    break;
                }
                case 2: {
                    //Declare Variables
                    float lngth, width, area;

                    //Initialize Variables
                     cout<<"You chose to calculate the Area of a rectangle."<<endl;
                     cout<<"Enter the Length of the rectangle"<<endl;
                     cin>>lngth;    //cannot be a negative number or have no value
                     if (lngth<=0){
                        cout<<"Invalid Input"<<endl;
                        exit(0);
                    }
                     cout<<"Enter the width of the rectangle."<<endl;
                     cin>>width;
                     if (width<=0){ //cannot be a negative number or have no value
                        cout<<"Invalid Input"<<endl;
                        exit(0);
                    }

                    //Map Inputs to Outputs
                    area=width*lngth;   //formula for area of rectangle

                    //Output
                    cout<<"The area of the rectangle is "<<area<<endl;

                    break;
                }
                case 3: {
                    //Declare Variables
                    float base, hght, area;

                    //Initialize Variables
                     cout<<"You chose to calculate the Area of a Triangle."<<endl;
                     cout<<"Enter the Base of the Triangle."<<endl;
                     cin>>base;
                     if (base<=0){  //cannot be a negative number or have no value
                        cout<<"Invalid Input"<<endl;
                        exit(0);
                    }
                     cout<<"Enter the Height of the Triangle."<<endl;
                     cin>>hght;
                     if (hght<=0){  //cannot be a negative number or have no value
                        cout<<"Invalid Input"<<endl;
                        exit(0);
                    }

                    //Map Inputs to Outputs
                    area=base*hght*.5;  //formula for area of triangle

                    //Output
                    cout<<"The area of the Triangle is "<<area<<endl;

                    break;
                }
                case 4: {
                    cout<<"Goodbye."<<endl;
                }
            }
            
            break;
        }
        default:cout<<"You choose to exit"<<endl;
    }
 
    //Exit
    return 0;
}

