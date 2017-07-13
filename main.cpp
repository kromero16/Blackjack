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
#include "Player.h"

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    Player p1;
    p1.firstDeal();
    p1.prntHand();
    cout<<"Hand Score: "<<p1.getTotScore()<<" \n";
    

    
    //Exit stage right
    return 0;
}

