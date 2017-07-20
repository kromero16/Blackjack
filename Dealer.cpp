/* 
 * File:   Dealer.h
 * Author: Kevin Romero
 * Purpose: Dealer Class for Blackjack
 * Created on July 13, 2017, 3:50 PM
 */

//System Libraries

//User Libraries
#include "Dealer.h"

//Implement default constructor
Dealer::Dealer() : Player() {
    
}

//Print dealer hand
void Dealer::prntDealerHand(){
    aHand.printHand();
}

//Print dealer deck
void Dealer::prntHouseDeck(){
    Player::viewDeck();
}

//Implement gameplay
void Dealer::game(Player p){
    while(aHand.getHandTotal() <= 21){
        aHand.printHand();
        cout<<"\n";
        
        if(aHand.getHandTotal() > p.getTotScore() && aHand.getHandTotal() <= 21){
            cout<<"The House Wins! \n";
            return;
        }
        if(aHand.getHandTotal() == p.getTotScore()){
            cout<<"Tied! \n";
            return;
        }
        this->hit();
    }
    if(aHand.getHandTotal() > 21){
        cout<<"House Busted! You Won! \n";
        return;
    }
}