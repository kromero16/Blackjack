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
    //Constructor
    Player();
    
    //Mutators
    void hit();
    
    //Accessors
    
};



#endif /* PLAYER_H */

