/* 
 * File:   Dealer.h
 * Author: Kevin Romero
 * Purpose: Dealer Class for Blackjack
 * Created on July 13, 2017, 3:50 PM
 */

#ifndef DEALER_H
#define DEALER_H

//System Libraries

//User Libraries
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"

//Create class
class Dealer: public Player{
private:
   
public:
    //Default Constructor
    Dealer();
    
    //Handle game logic
    void game(Player);
    
    //Print dealer hand
    void prntDealerHand();
    
    
};



#endif /* DEALER_H */
