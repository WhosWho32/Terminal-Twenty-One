#pragma once
#include <vector>
using std::vector;
void showbotdeck(); //Show the true deck of the bot
void showbotdeckfake(); //Show the "fake" bot deck, with the ? in place of the actual number
void showplayerdeck(); //Show the deck of the player
void winner(); //Declare the winner of the game
void choice(); //Player choice
void botdecide(); //Bot decides
void draw(); //Make the player draw cards
extern short int botsum; //The total the bot has
extern short int playersum; //The total the player has
extern short int bottotalcards; //How many cards the bot has
extern short int totalcards; //How many cards the player has
extern vector <int> deck; //The deck for the player
extern vector <int> botdeck; //The deck for the bot
extern vector <int> allcards; //Vector with all possible cards
extern bool botstays; //Check whether the bot stays or not
extern bool playerstays; //Check whether the player stays or not
extern bool playerlose; //Check if player is overboard, and if so they automatically lose
extern bool botlose; //Check if bot is overboard, and if it is, it automatically loses
extern bool botdecision; //Let the bot know it is its' turn
extern short int n; //Keep track of all possible cards
