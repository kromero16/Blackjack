/* 
 * File:   main.cpp
 * Author: Kevin Romero
 *
 * Created on June 28, 2017, 8:43 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries
#include "Card.h"

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    Card aCrd(1);
    cout<<aCrd.getFace()<<" \n";
    cout<<aCrd.getSuit()<<" \n";

   
    
 

    
    //Exit stage right
    return 0;
}

