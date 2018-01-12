/* 
 * File:   main.cpp
 * Author: Eli Andrade, Daisy Garcia-Osorio, Byeongju Jung 
 * Created on January 10, 2018, 12:58 PM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float mousegr,  //Mouse weight in grams
          komouse,  //Grams of artificial sweetener to kill mouse
          persgr,   //100 pound person weight in grams
          kopers,   //Grams of artificial sweetener to kill a 100lbs person
          sodagr,   //Weight of soda in Grams
          sweet,    //Artifical Sweetener in Grams
          human,    //Persons inputed weight
          convw,    //Converted Weight 
          cans;
    
    
            
    
    //Input or initialize values Here
    mousegr=35;       //Mouse Weight in Grams
    komouse=5;        //Grams of artificial Sweetener to kill mouse
    sweet=.35;        //Grams of artificial sweetener in diet soda 
       
    //Weight Input
    cout<<"What is your goal weight in pounds?"<<endl;
    cout<<"Press enter after inputing the weight"<<endl;
    cin>>human; 
    
    //Convert weight to Grams
    convw=human*454;    
    
    //Process/Calculations Here
    kopers=(convw*komouse)/mousegr;
    cans=kopers/sweet;
    
    
    //Output Located Here
    cout<<fixed<<setprecision(0);
    cout<<"You have entered "<<human<<"lbs"<<endl;
    cout<<"The amount of soda it will take to kill a "
        <<human<<"lbs person is"<<endl;
    cout<<cans<<" cans of diet soda"<<endl;
    
    

    //Exit
    return 0;
}

