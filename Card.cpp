/*
 * File: Card.cpp
 * Purpose: Implementation of Card Class
 * Date: June 28, 2017
 */

//System Libraries
#include <iostream>

//User Libraries
#include "Card.h"

//Default Constructor
Card::Card(){
    
}

//Constructor
Card::Card(FACE const& f, SUIT const &s){
    this->setFace(f);
    this->setSuit(s);
}

//Constructor
Card::Card(int i){
    this->setSuit(static_cast<SUIT>(i/fCount));
    this->setFace(static_cast<FACE>(i%fCount));
}

//Implement toString
std::string Card::toString(FACE const&f){
    switch(f){
        case FACE::ACE:     return "Ace";
        case FACE::EIGHT:   return "Eight";
        case FACE::FIVE:    return "Five";
        case FACE::FOUR:    return "Four";
        case FACE::JACK:    return "Jack";
        case FACE::KING:    return "King";
        case FACE::NINE:    return "Nine";
        case FACE::QUEEN:   return "Queen";
        case FACE::SEVEN:   return "Seven";
        case FACE::SIX:     return "Six";
        case FACE::TEN:     return "Ten";
        case FACE::THREE:   return "Three";
        case FACE::TWO:     return "Two";
        default: throw std::logic_error("invalid face");
   }
}

std::string Card::toString(SUIT const&s){
    switch(s){
        case SUIT::CLUBS:       return "Clubs";
        case SUIT::DIAMONDS:    return "Diamonds";
        case SUIT::HEARTS:      return "Hearts";
        case SUIT::SPADES:      return "Spades";
        default: throw std::logic_error("invalid suit");
    }

}