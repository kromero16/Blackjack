/* 
 * File:   Card.h
 * Author: Kevin Romero
 * Purpose: Card Class
 * Created on June 28, 2017, 8:56 PM
 */

#ifndef CARD_H
#define CARD_H

//System Libraries
#include <vector>
#include <string>
#include <assert.h>
#include <stdexcept>


//Globals
enum SUIT{SPADES, HEARTS, CLUBS, DIAMONDS, sCount};
enum FACE{ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
                JACK, QUEEN, KING, fCount};


//Create Card Class
class Card{
private:
    SUIT m_suit;        //Holds current suit
    FACE m_face;        //Holds current face
   
public:             

    //Default Constructor
    Card(int);
    
    //Mutators
    void setFace(FACE f){
        m_face=f;
    }
    
    void setSuit(SUIT s){
       m_suit=s;
    } 
    
    //Get value of face 
    FACE getFace(){
        return m_face;
    }
 
    //Get value of suit
    SUIT getSuit(){
        return m_suit;
    }
    
    //Convert face to string
    std::string getFace(FACE f){
        switch(f){
            case FACE::ACE: return "Ace";
            case FACE::EIGHT: return "Eight";
            case FACE::FIVE: return "Five";
            case FACE::FOUR: return "Four";
            case FACE::JACK: return "Jack";
            case FACE::KING: return "King";
            case FACE::NINE: return "Nine";
            case FACE::QUEEN: return "Queen";
            case FACE::SEVEN: return "Seven";
            case FACE::SIX: return "Six";
            case FACE::TEN: return "Ten";
            case FACE::THREE: return "Three";
            case FACE::TWO: return "Two";
            default: throw std::logic_error("invalid rank");
        }
    }
    
    //Convert suit to string
    std::string getSuit(SUIT s){
        switch(s){
            case SUIT::CLUBS: return "Clubs";
            case SUIT::DIAMONDS: return "Diamonds";
            case SUIT::HEARTS: return "Hearts";
            case SUIT::SPADES: return "Spades";
            default: throw std::logic_error("invalid suit");
        }
    }
   
   
    
    
};



#endif /* CARD_H */

