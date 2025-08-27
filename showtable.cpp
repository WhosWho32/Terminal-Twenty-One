#include <iostream>
#include "header.h"
using namespace std;
void showbotdeck() {
        bottotalcards = botdeck.size();
        switch(bottotalcards) {
            case 2:
                if (botsum>= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                             |"<<endl;
                    cout<<"                          |----------                                             |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 3:
                if (botsum>= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                             |"<<endl;
                    cout<<"                          |----------                                             |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 4:
                if (botsum>= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                             |"<<endl;
                    cout<<"                          |----------                                             |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 5:
                if (botsum>= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                             |"<<endl;
                    cout<<"                          |----------                                             |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 6:
                if (botsum>= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                             |"<<endl;
                    cout<<"                          |----------                                             |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<"   "<<botdeck[5]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | "<<botsum<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            "<<botdeck[0]<<"   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<"   "<<botdeck[5]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
}}
void showbotdeckfake() {
        bottotalcards = botdeck.size();
        switch(bottotalcards) {
            case 2:
                if (botsum-botdeck[0] >= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                          |"<<endl;
                    cout<<"                          |-------------                                          |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 3:
                if (botsum-botdeck[0] >= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                          |"<<endl;
                    cout<<"                          |-------------                                          |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 4:
                if (botsum-botdeck[0] >= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                          |"<<endl;
                    cout<<"                          |-------------                                          |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 5:
                if (botsum-botdeck[0] >= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                          |"<<endl;
                    cout<<"                          |-------------                                          |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
            case 6:
                if (botsum-botdeck[0] >= 10) {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                         |"<<endl;
                    cout<<"                          |--------------                                         |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<"   "<<botdeck[5]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                else {
                    cout<<endl;
                    cout<<"				                  Bot hand"<<endl;
                    cout<<"		           _______________________________________________________"<<endl;
                    cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                          |"<<endl;
                    cout<<"                          |-------------                                          |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                                            ?   "<<botdeck[1]<<"   "<<botdeck[2]<<"   "<<botdeck[3]<<"   "<<botdeck[4]<<"   "<<botdeck[5]<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                    cout<<"                          |                                                       |"<<endl;
                }
                break;
    }
}
void showplayerdeck() {
        switch(totalcards) {
            case 2:
                if (playersum >= 10) {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                break;
            case 3:
               if (playersum >= 10) {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                break;
            case 4:
                if (playersum >= 10) {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<"   "<<deck[3]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<"   "<<deck[3]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                break;
            case 5:
                if (playersum >= 10) {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<"   "<<deck[3]<<"   "<<deck[4]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<"   "<<deck[3]<<"   "<<deck[4]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                break;
            case 6:
                if (playersum >= 10) {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<"   "<<deck[3]<<"   "<<deck[4]<<"   "<<deck[5]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                                            "<<deck[0]<<"   "<<deck[1]<<"   "<<deck[2]<<"   "<<deck[3]<<"   "<<deck[4]<<"   "<<deck[5]<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                break;
        }
    }
