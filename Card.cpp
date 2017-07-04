/*
 * File: Card.cpp
 * Purpose: Implementation of Card Class
 * Date: June 28, 2017
 */

//System Libraries
#include <iostream>

//User Libraries
#include "Card.h"

Card::Card(int i){
    this->setSuit(static_cast<SUIT>(i/fCount));
    this->setFace(static_cast<FACE>(i%fCount));
}