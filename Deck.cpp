/*
 * File: Deck.cpp
 * Purpose: Implementation of Deck Object
 */

//System Libraries

//User Libraries
#include "Deck.h"

//Implement Constructor
Deck::Deck(){
    this->fillDeck();
   // this->fillVec();
}

//Implement deal function
/*std::string Deck::dealCard(){
    string str;
    str=aDeck.back();
    aDeck.pop_back();
    return str;
}*/


//Implement deck shuffle
/*void Deck::shuffleDeck(){
    std::random_shuffle(aDeck.begin(), aDeck.end());
}*/

//Print vector of card strings
/*void Deck::printVec(){
    vector<string>::const_iterator it;
    
    //print vector contents
    for(it=aDeck.begin();it!=aDeck.end();++it){
        cout<<*(it)<<" \n";
    }
}*/

//Fill both decks with 52 cards
/*void Deck::fillVec(){
     for(int i=1;i<FACE_S+1;i++){
        for(int j=1;j<SUIT_S+1;j++){
            aDeck.push_back(aCard(static_cast<FACE>(i),static_cast<SUIT>(j)));
            defaultDeck.push_back(aCard->getGivenCard(static_cast<FACE>(i),static_cast<SUIT>(j)));
        }
    }
}*/

//Implement fill deck
void Deck::printDeck(){
    for(int i=1;i<FACE_S+1;i++){
        for(int j=1;j<SUIT_S+1;j++){
            cout<<aCard->toString(static_cast<FACE>(i))<<" of "
                    <<aCard->toString(static_cast<SUIT>(j))<<" ";
            cout<<"Card Value: ";
            cout<<aCard->getCardVal(static_cast<FACE>(i))<<"\n";
            cout<<"\n";
        }
    }
}

//Implement fill deck
void Deck::fillDeck(){
    for(int i=1;i<FACE_S+1;i++){
        for(int j=1;j<SUIT_S+1;j++){
            aCard = new Card(static_cast<FACE>(i), static_cast<SUIT>(j));
        }
    }
}

//Implement Deconstructor
Deck::~Deck(){
    delete aCard;
}