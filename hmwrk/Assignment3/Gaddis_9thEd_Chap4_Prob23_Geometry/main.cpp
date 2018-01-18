/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 17, 2018, 6:20 PM
 * Purpose: Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
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
            if (radius<=0){     //Cannot be a negative number or have no value
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
    
    //Exit stage right!
    return 0;
}