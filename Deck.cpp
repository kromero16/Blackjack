/*
 * File: Deck.cpp
 * Purpose: Implementation of Deck Object
 */

//System Libraries

//User Libraries
#include "Deck.h"

//Implement Constructor
Deck::Deck(){
    for(int i=0;i<DECK_S;i++){
        aCard = new Card(i);
    }
}

void Deck::printDeck(){
    for(int i=1;i<FACE_S+1;i++){
        for(int j=0;j<SUIT_S;j++){
            cout<<aCard->toString(static_cast<FACE>(i))<<" Of "
                    <<aCard->toString(static_cast<SUIT>(j))<<" \n";
        }
    }
}

//Implement Deconstructor
Deck::~Deck(){
    delete aCard;
}