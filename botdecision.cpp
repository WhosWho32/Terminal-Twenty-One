#include "header.h"
#include <iostream>
using std::cout;
using std::endl;
void botdecide () {
        while (botdecision && botsum <= 10) {
            cout<<"The bot chooses to draw."<<endl;
            botdeck.push_back(allcards[rand()%(n+1)]);
            n--;
            if (botdeck.back() == deck.back()) {
                botdeck.back() = allcards[rand()%(n+1)];
            }
            //Calculate the total sum for the cards that the bot has
            botsum = botsum + botdeck.back();
            //Reset all cards
            allcards = {};
            for (int i = 1; i <=11; i++) {
                allcards.push_back(i);
                for (int r : botdeck) {
                    if (r == i) {
                        allcards.pop_back();
                }
                }
                for (int l : deck) {
                    if (l == i) {
                        allcards.pop_back();
                    }
                }
            }
            showbotdeckfake();
            showplayerdeck();
            choice();
            botdecision = false; //Reset it to not make it infinite
        }
        //Bot stays if his total is greater than or equal to 17
        while (botdecision && botsum >= 17 && botsum < 21) {
                cout<<"The bot chooses to stay."<<endl;
                botstays = true;
                botdecision = false;
                if (playerstays == false) {
                    choice();
                }

        }
        //If bot is maxed out
        while (botdecision && botsum == 21) {
            cout<<"The bot chooses to stay."<<endl;
            botstays = true;
            botdecision = false;
            if (playerstays == false) {
                choice();
            }
        }
        //If bot is overboard
        while (botdecision && botsum > 21) {
            cout<<"The bot chooses to stay."<<endl;
            botstays = true;
            botlose = true;
            if (playerstays == false) {
                choice();
            }
            botdecision = false;
        }
        //If bot is between 10 and 17, it chooses randomly to either draw either stay (and you have 2 cards)
        while (botdecision && botsum > 10 && botsum < 17) {
            int randnum = rand() % 2;
            if (randnum == 0) {
                cout<<"The bot chooses to stay."<<endl;
                botstays = true;
                if (playerstays == false) {
                        choice();
                }
                botdecision = false;
            }
            else if (randnum == 1) {
                cout<<"The bot chooses to draw."<<endl;
                botstays = false;
                botdeck.push_back(allcards[rand()%(n+1)]);
                botsum = botsum + botdeck.back();
                n--;
                if (botdeck.back() == deck.back()) {
                botdeck.back() = allcards[rand()%(n+1)];
            }
                //Reset all cards
                allcards = {};
                for (int i = 1; i <=11; i++) {
                    allcards.push_back(i);
                    for (int r : botdeck) {
                        if (r == i) {
                            allcards.pop_back();
                    }
                    }
                    for (int j : deck) {
                        if (j == i) {
                            allcards.pop_back();
                        }
                    }
            }
                //Calculate the total sum for the cards that the bot has
                showbotdeckfake();
                showplayerdeck();
                choice();
                botdecision = false;
            }
        }

    }
