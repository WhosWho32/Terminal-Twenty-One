#include <iostream>
#include "header.h"
using std::cout;
using std::endl;
void winner() {
        switch(totalcards) {
            case 2:
                switch(bottotalcards) { //Bot total cards
                    case 2:
                        if (playerstays == true &&  botstays == true) {
                            if (playersum > botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------You!---------"<<endl;
                            }
                            else if (playersum < botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------The bot!---------"<<endl;
                            }
                            if (playersum == botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 3:
                          if (playerstays == true &&  botstays == true) {
                            if (playersum > botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------You!---------"<<endl;
                            }
                            if (botlose == false) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }

                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 4:
                        if (playerstays == true &&  botstays == true) {
                            if (playersum > botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------You!---------"<<endl;
                            }
                            if (botlose == false) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }

                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 5:
                        if (playerstays == true &&  botstays == true) {
                            if (playersum > botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------You!---------"<<endl;
                            }
                            if (botlose == false) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }

                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 6:
                         if (playerstays == true &&  botstays == true) {
                            if (playersum > botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------You!---------"<<endl;
                            }
                            if (botlose == false) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;

        }
                break;
            case 3:
                switch(bottotalcards) { //Bot total cards
                    case 2:
                        if (playerstays == true &&  botstays == true) {
                            if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (playersum < botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------The bot!---------"<<endl;
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 3:
                          if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 4:
                        if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 5:
                        if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 6:
                         if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;

                }
                break;
            case 4:
                switch(bottotalcards) { //Bot total cards
                    case 2:
                        if (playerstays == true &&  botstays == true) {
                            if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }

                            if (playersum < botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------The bot!---------"<<endl;
                        }
                            else if (playerlose == true){
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 3:
                          if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 4:
                        if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 5:
                        if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;

                }
                break;
            case 5:
                switch(bottotalcards) { //Bot total cards
                    case 2:
                        if (playerstays == true &&  botstays == true) {
                            if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum < botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------The bot!---------"<<endl;
                            }
                            else if (playerlose == true) {
                               if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 3:
                         if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 4:
                        if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 5:
                        if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                }
                break;
            case 6:
                switch(bottotalcards) { //Bot total cards
                    case 2:
                        if (playerstays == true &&  botstays == true) {
                            if (playerlose == false){
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if (playersum < botsum) {
                                showbotdeck();
                                showplayerdeck();
                                cout<<"The winner is..."<<endl;
                                cout<<"---------The bot!---------"<<endl;
                            }
                            else if (playerlose == true){
                               if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                    case 3:
                          if (playerstays == true &&  botstays == true) {
                             if (playerlose == false) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                                }
                            }

                            else if (playerlose == true) {
                                if (playersum > botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            if (botlose == false) {
                               if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------The bot!---------"<<endl;
                            }
                            }
                            else if (botlose == true) {
                                if (playersum < botsum) {
                                    showbotdeck();
                                    showplayerdeck();
                                    cout<<"The winner is..."<<endl;
                                    cout<<"---------You!---------"<<endl;
                            }
                            }
                            if(playersum == botsum){
                                showbotdeck();
                                showplayerdeck();
                                cout<<"It's a draw!";
                            }
                        }
                        break;
                }
                break;}
}
