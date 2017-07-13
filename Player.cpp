/* 
 * File:   Player.cpp
 * Author: Kevin Romero
 * Purpose: Implementation of Player Object for Blackjack
 * Created on July 12, 2017, 5:16 PM
 */

//System Libraries

//User Libraries
#include "Player.h"

//Implement Default Constructor
Player::Player(){
 
   
}

void Player::hit(){
    aHand.addCard(aDeck.dealCard());
}
