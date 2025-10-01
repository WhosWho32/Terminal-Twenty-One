//Terminal Twenty One game inspired by the Roblox game Twenty one, except there's no trump cards
//By WhosWho
//Last edited: August 27th
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "header.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
vector <int> allcards = {1,2,3,4,5,6,7,8,9,10,11};
short int decider;
vector <int> deck;
vector <int> botdeck;
short int botsum = 0;
short int playersum = 0;
short int totalcards;
short int bottotalcards;
bool playerstays = false;
bool botstays = false;
bool playerlose = false;
bool botlose = false;
bool botdecision = false;
string replay;
short int n = 10;
string c;
string botdeckfake[1] = {"?"};
void choice() {

        cout<<"What will you choose to do?"<<endl;
        cout<<"- Draw a card [d]"<<endl;
        cout<<"- Stay [s]"<<endl;
        cout<<"-----Your choice: "; cin>>c;
        while (!(c.size()==1)) {
            cout<<"Unknown command. Make sure you wrote the correct letter and try again."<<endl;
            cin.clear();
            cin.ignore(10000,'\n');
            cout<<"What will you choose to do?"<<endl;
            cout<<"- Draw a card [d]"<<endl;
            cout<<"- Stay [s]"<<endl;
            cout<<"-----Your choice: "; cin>>c;
        }
        if (c == "s") {
                cout<<"You chose to stay."<<endl;
                playerstays = true;
                botdecision = true;
                botdecide();
                if (playersum > 21) {
                    playerlose = true;
                }
        } else if (c == "d") {
            if (playersum < 21) {
                    cout<<"You chose to draw."<<endl;
                    draw();
                }
            else if (playersum > 21){
                cout<<"You can't draw anymore, as you'd go overboard. Therefore, you will be made to stay."<<endl;
                playerstays = true;
                playerlose = true;
                botdecide();
            }
            else {
                cout<<"You can't draw anymore, as you'd go overboard. Therefore, you will be made to stay."<<endl;
                playerstays = true;
                botdecide();
            }
        }
        else {
            cout<<"Invalid command. Please write the letter for one of the commands provided."<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
            choice();
        }
}
void draw() {
        deck.push_back(allcards[rand()%(n+1)]); //Draw the card
        n--;
        totalcards = deck.size();
        while (deck.front() == botdeck.front() || deck.front() == botdeck.back()) {
            deck.front() == allcards[rand()%(n+1)]; //Re-roll for player if they have the same card as the bot
        }
        while (deck.back() == botdeck.front() || deck.back() == botdeck.back()) {
            deck.back() == allcards[rand()%(n+1)]; //Re-roll for player if they have the same card as the bot
        }
        //Reset all cards
        allcards = {};
        for (int i = 1; i <=11; i++) {
            allcards.push_back(i);
            for (int s : deck) {
                if (s == i) {
                    allcards.pop_back();
            }

            }
            for (int k : botdeck) {
                if (k == i) {
                    allcards.pop_back();
                }
            }
        }
        playersum = playersum + deck.back();
        playerstays = false;
        switch(totalcards) {
            case 2:
                showbotdeckfake();
                showplayerdeck();
                cout<<"The bot is thinking..."<<endl;
                break;
            case 3:
                showbotdeckfake();
                showplayerdeck();
                cout<<"The bot is thinking..."<<endl;
                break;
            case 4:
                showbotdeckfake();
                showplayerdeck();
                cout<<"The bot is thinking..."<<endl;
                break;
            case 5:
                showbotdeckfake();
                showplayerdeck();
                cout<<"The bot is thinking..."<<endl;
                break;
            case 6:
                showbotdeckfake();
                showplayerdeck();
                cout<<"The bot is thinking..."<<endl;
                break;

        }
        botdecision = true;
        botdecide();
    }

class Game {
public:

    Game() {
        decider = rand()%allcards.size(); //Choose the index
        deck.push_back(allcards[decider]);
        for (int i = 0; i <= allcards.size()-1; i++) {
            if (allcards[i] == deck[0]) {
                allcards.erase(allcards.begin()+i);
            }
        }
        
        decider = rand()%allcards.size();
        deck.push_back(allcards[decider]);
        for (int i = 0; i <= allcards.size()-1; i++) {
            if (allcards[i] == deck[1]) {
                allcards.erase(allcards.begin()+i);
            }
        }
        decider = rand()%allcards.size(); //Choose the index
        botdeck.push_back(allcards[decider]);
        for (int i = 0; i <= allcards.size()-1; i++) {
            if (allcards[i] == botdeck[0]) {
                allcards.erase(allcards.begin()+i);
            }
        }
        decider = rand()%allcards.size(); //Choose the index
        botdeck.push_back(allcards[decider]);
        for (int i = 0; i <= allcards.size()-1; i++) {
            if (allcards[i] == botdeck[1]) {
                allcards.erase(allcards.begin()+i);
            }
        }
        n = 6;
        totalcards = deck.size();
        bottotalcards = botdeck.size();
        //Calculate the total sum for the cards that the bot has
        botsum = botdeck[0] + botdeck[1];
        //Calculate the total sum for the cards that the player has
        playersum = deck[0] + deck[1];
        //First round
        showbotdeckfake();
        showplayerdeck();
        choice();
        //If the player and bot draw the same card, make the bot change it
        for (int r : deck) {
            if (botdeck.back() == r) {
                botdeck.back() = allcards[rand()%(n+1)];
            }
        }
        if (playerstays == true && botstays == true) {
            winner();
        }
}
    ~Game() {
        cout<<endl;
        cout<<"Would you like to play again? [y/n]: ";
        cin>>replay;
        while (!(replay.size()==1)) {
            cout<<"Unknown command. Make sure you wrote the correct letter and try again."<<endl;
            cin.clear();
            cin.ignore(10000,'\n');
            cout<<"Would you like to play again? [y/n]: ";
            cin>>replay;
        }
        if (replay == "y") {
           deck.clear();
           botdeck.clear();
           n = 10;
           allcards = {1,2,3,4,5,6,7,8,9,10,11};
           botsum = 0;
           playersum = 0;
           playerstays = false;
           botstays = false;
           playerlose = false;
           botlose = false;
           botdecision = false;
           Game restart;
        }
    }
};

int main() {
    srand(time(NULL));
     cout<<R"(
                                 _____                   _             _
                                |_   _|__ _ __ _ __ ___ (_)_ __   __ _| |
                                  | |/ _ \ '__| '_ ` _ \| | '_ \ / _` | |
                                  | |  __/ |  | | | | | | | | | | (_| | |
                                  |_|\___|_|  |_| |_| |_|_|_| |_|\__,_|_|
                                 _____                    _            ___
                                |_   _|_      _____ _ __ | |_ _   _   / _ \ _ __   ___
                                  | | \ \ /\ / / _ \ '_ \| __| | | | | | | | '_ \ / _ \
                                  | |  \ V  V /  __/ | | | |_| |_| | | |_| | | | |  __/
                                  |_|   \_/\_/ \___|_| |_|\__|\__, |  \___/|_| |_|\___|
                                                              |___/                    )"<<endl;
        cout<<endl;
        cout<<"// The terminal version of Twenty One Roblox game except there's no trump cards. Similar to Blackjack."<<endl;
        cout<<"// Program made by: WhosWho"<<endl;
        cout<<"// Github: https://github.com/WhosWho32"<<endl;
    Game start;
}
