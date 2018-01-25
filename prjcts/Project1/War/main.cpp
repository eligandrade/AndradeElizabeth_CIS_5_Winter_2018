/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 24, 2018, 6:20 PM
 * Purpose: Creating a game of War
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
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int MAX=52;
    int pscore, cscore, shuffle1, shuffle2, player, com;
    unsigned int a, b, c, d;
    
    //Initialize Variables
    shuffle1=shuffle2=(rand()%52);
    
    shuffle1=player;
    shuffle2=com;
    
    //Player
    a=(2+rand()%13);
    b=(rand()%4);
    
    cout<<"Player plays   :";
    
    if(a<=10){
        cout<<a;
    }else if(a==11){
        cout<<"Jack";
    }else if(a==12){
        cout<<"Queen";
    }else if(a==13){
        cout<<"King";
    }else{
        cout<<"Ace";
    }
    
    if(b==0){
        cout<<" of Spades";
    }else if(b==1){
        cout<<" of Diamonds";
    }else if(b==2){
        cout<<" of Hearts";
    }else{
        cout<<" of Clubs";
    }
    cout<<endl;
    
    //Computer
    c=(2+rand()%13);
    d=(rand()%4);
    
    cout<<"Computer plays :";
    
    if(c<=10){
        cout<<c;
    }else if(c==11){
        cout<<"Jack";
    }else if(c==12){
        cout<<"Queen";
    }else if(c==13){
        cout<<"King";
    }else{
        cout<<"Ace";
    }
    
    if(d==0){
        cout<<" of Spades";
    }else if(d==1){
        cout<<" of Diamonds";
    }else if(d==2){
        cout<<" of Hearts";
    }else{
        cout<<" of Clubs";
    }
    cout<<endl;
  
    //Output data
    cout<<endl;
    if(a==c){
        cout<<"It's a Tie!"<<endl;
    }else if(a>c){
        cout<<"Player wins!"<<endl;
    }else{
        cout<<"Computer Wins!"<<endl;
    }
    
    //Exit stage right!
    return 0;
}