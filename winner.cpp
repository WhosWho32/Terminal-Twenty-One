#include <iostream>
#include "header.h"
using std::cout;
using std::endl;
void winner() {
    if (playerstays == true && botstays == true) {
        //If player isn't above 21
        if (playerlose == false) {
            //And their total is bigger than bot's total, they win
            if (playersum > botsum) {
                showbotdeck();
                showplayerdeck();
                cout<<"The winner is..."<<endl;
                 cout<<"---------You!---------"<<endl;
            }
        }
        //If player is above 21, they automatically lose
        else if (playerlose == true) {
            if (playersum > botsum) {
                showbotdeck();
                showplayerdeck();
                cout<<"The winner is..."<<endl;
                cout<<"---------The bot!---------"<<endl;
            }
            
        }
        //If bot isn't abovw 21
        if (botlose == false) {
            //And bot's total is bigger than player's total, the bot wins
            if (playersum < botsum) {
                showbotdeck();
                showplayerdeck();
                cout<<"The winner is..."<<endl;
                cout<<"---------The bot!---------"<<endl;
            }
        }
        
        //If the bot is above 21, they automatically lose
        else if (botlose == true) {
            if (playersum < botsum) {
                showbotdeck();
                showplayerdeck();
                cout<<"The winner is..."<<endl;
                cout<<"---------You!---------"<<endl;
            }
            
        }
        //If their total is equal, it's a draw
        if (playersum == botsum) {
            showbotdeck();
            showplayerdeck();
            cout<<"It's a draw!"<<endl;
        }
    }
       
}
