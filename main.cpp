/* 
 * File:   main.cpp
 * Author: Kevin Romero
 *
 * Created on June 28, 2017, 8:43 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries
#include "Dealer.h"

//Function Prototypes
void toUpper(string &);

//Begin Execution
int main(int argc, char** argv) {
    //Create player and house
    Player user;
    Dealer house;
    string ch;
    
    cout<<"User Deck: \n";
    user.viewDeck();
    
    cout<<"\n\nPrinting Dealer's Deck: \n";
    house.viewDeck();
    
    user.firstDeal();
    cout<<"\n\nUser Cards: \n";
    user.prntHand();
    
    cout<<"\n\nUser Deck after dealing: \n";
    user.viewDeck();
    
    cout<<"\n\nDealer Deck after dealing: \n";
    house.viewDeck();
    
    
    
    /*if(user.winBJ()){
        cout<<"You won!\n";
    }
    else if(house.winBJ()){
        cout<<"You Lost, The Dealer Beat You!\n";
    }
    else{
        while(!user.isBust()){
            cout<<"Would You Like to Hit or Stand?\n\n";
            cout<<"Enter an H for Hit or S for Stand.\n";
            cin>>ch;
            toUpper(ch);
            cout<<"You typed: "<<ch<<"\n";
            
            if(ch == "H"){
                user.hit();
            }
            cout<<"You hand after hitting: ";
            user.prntHand();
            cout<<"\n\n";
            cout<<"Hand Total after hitting: "<<user.getTotScore()<<"\n\n";
         
        }
    }*/
            
    

    
    //Exit stage right
    return 0;
}

//char to upper
void toUpper(string &c){
    for(int i=0;i<c.size();i++){
        c.at(i) = std::toupper(c.at(i));
    }
}

