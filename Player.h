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
protected:
    Deck aDeck;
    Hand aHand;
    int handScore;
    bool bust;
    
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
    bool isBust();
    bool winBJ();
    
};



#endif /* PLAYER_H */

