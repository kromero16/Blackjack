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
    this->firstDeal();
    this->isBust();
}

//Det. if player bust
bool Player::isBust(){
    if(handScore>21)
        return true;
    return false;
}

//Get total hand score
int Player::getTotScore(){
    handScore=aHand.getHandTotal();
    return handScore;
}

//Print cards in hand
void Player::prntHand(){
    aHand.printHand();
}

//Implement Constructor
void Player::firstDeal(){
    aHand.initDraw(aDeck.dealCard(),aDeck.dealCard());
}

void Player::hit(){
    aHand.addCard(aDeck.dealCard());
}
