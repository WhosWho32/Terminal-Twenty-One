#include <iostream>
#include "header.h"
using std::cout;
using std::endl;

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
                    cout<<"                          |                 ";
                    btalign(2);
                    for (int i = 1; i <= 30; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(2);
                    for (int i = 1; i <= 30; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(3);
                    for (int i = 1; i <= 26; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(3);
                    for (int i = 1; i <= 26; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(4);
                    for (int i = 1; i <= 22; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(4);
                    for (int i = 1; i <= 22; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(5);
                    for (int i = 1; i <= 18; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(5);
                    for (int i = 1; i <= 18; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(6);
                    for (int i = 1; i <= 14; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    btalign(6);
                    for (int i = 1; i <= 14; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(2);
                    for (int i = 1; i <= 30; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(2);
                    for (int i = 1; i <= 30; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(3);
                    for (int i = 1; i <= 26; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(3);
                    for (int i = 1; i <= 26; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(4);
                    for (int i = 1; i <= 22; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(4);
                    for (int i = 1; i <= 22; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(5);
                    for (int i = 1; i <= 18; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(5);
                    for (int i = 1; i <= 18; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(6);
                    for (int i = 1; i <= 14; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    bfalign(6);
                    for (int i = 1; i <= 14; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    align(2);
                    for (int i = 1; i <= 30; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                          |                 ";
                    align(2);
                    for (int i = 1; i <= 30; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    align(3);
                    for (int i = 1; i <= 26; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                          |                 ";
                    align(3);
                    for (int i = 1; i <= 26; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    align(4);
                    for (int i = 1; i <= 22; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                          |                 ";
                    align(4);
                    for (int i = 1; i <= 22; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    align(5);
                    for (int i = 1; i <= 18; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                          |                 ";
                    align(5);
                    for (int i = 1; i <= 18; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
                    cout<<"                          |                 ";
                    align(6);
                    for (int i = 1; i <= 14; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
                    cout<<"                          |_________                                              |"<<endl;
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
                }
                else {
                    cout<<"                          |                 ";
                    align(6);
                    for (int i = 1; i <= 14; i++) {
                            cout<<" ";
                    }
                    cout<<"|"<<endl;
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
