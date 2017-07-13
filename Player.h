/* 
 * File:   Player.h
 * Author: Kevin Romero
 * Purpose: Player Class
 * Created on July 13, 2017, 1:13 AM
 */

#ifndef PLAYER_H
#define PLAYER_H

//System Libraries

//User Libraries
#include "Hand.h"
#include "Card.h"
#include "Deck.h"

//Create player class
class Player{
private:
    Deck aDeck;
    Hand aHand;
    int handScore;
    
public:
    //Default Constructor
    Player();
    
    //Constructor
    
    
    //Mutators
    void hit();
    void firstDeal();       //Deals 2 cards to start round
    
    //Accessors
    void prntHand();
    int getTotScore();
    
};



#endif /* PLAYER_H */

