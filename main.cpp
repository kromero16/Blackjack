/* 
 * File:   main.cpp
 * Author: Kevin Romero
 * Purpose: Main Implementation of Blackjack Game
 * Created on June 28, 2017, 8:43 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries
#include "Player.h"
#include "Deck.h"
#include "Dealer.h"

//Function Prototypes
void toUpper(string &);     //converts user input to uppercase

//Begin Execution
int main(int argc, char** argv) {
    //Create player and house
    //Deck aDeck;
    Player user;
    Dealer house;
    string ch;
    
    cout<<"\n\nOriginal Deck: \n";
    user.viewDeck();
    cout<<"\n\n";
    
    cout<<"\n\nDealer Deck \n\n";
    house.viewDeck();
    
    cout<<"\n\nDealing First Round: \n\n";
    user.firstDeal();
    
    cout<<"\n\nUser's Hand: ";
    user.prntHand();
    cout<<"\n\n";
    cout<<"User Hand Value: "<<user.getTotScore()<<"\n\n";
    
    cout<<"\n\nHouse Dealing: \n\n";
    house.firstDeal();
    
    cout<<"\n\nHouse Hand: \n\n";
    house.prntDealerHand();
    cout<<"Dealer Hand Value: "<<house.getTotScore()<<"\n\n";
    
  
    
    
    
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

