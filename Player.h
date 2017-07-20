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
    Deck *aDeck = new Deck();
    Hand aHand;
    bool bust;
    
public:
    //Default Constructor
    Player();
    
    //Constructor
    Player(Deck *);
    
    //Mutators
    void hit();
    void firstDeal();       //Deals 2 cards to start round
    
    //Accessors
    void prntHand();
    const int getTotScore();
    bool isBust();
    bool winBJ();
    void viewDeck();
    
};



#endif /* PLAYER_H */

