#include "header.h"

void showbotdeck() {
        bottotalcards = botdeck.size();
        cout<<endl;
        cout<<"				                  Bot hand"<<endl;
        cout<<"		           _______________________________________________________"<<endl;
        cout<<"                          | "<<botsum<<" / 21 |                                             |"<<endl;
        if (botsum >= 10) 
            cout<<"                          |----------                                             |"<<endl;
        else 
            cout<<"                          |--------------                                         |"<<endl;
        cout<<"                          |                                                       |"<<endl;
        cout<<"                          |                 ";
        switch(bottotalcards) {
            case 2:
                btalign(2);
                for (int i = 1; i <= 30; i++) 
                        cout<<" ";
                break;
            case 3:
                btalign(3);
                for (int i = 1; i <= 26; i++) 
                        cout<<" ";
                break;
            case 4:
                btalign(4);
                for (int i = 1; i <= 22; i++) 
                        cout<<" ";
                break;
            case 5:
                btalign(5);
                for (int i = 1; i <= 18; i++) 
                        cout<<" ";
                break;
            case 6:
                btalign(6);
                for (int i = 1; i <= 14; i++) 
                        cout<<" ";
                break;
}
                cout<<"|"<<endl;
                for (int i = 0; i < 4; i++) 
                    cout<<"                          |                                                       |"<<endl;
}
void showbotdeckfake() {
        bottotalcards = botdeck.size();
        cout<<endl;
        cout<<"				                  Bot hand"<<endl;
        cout<<"		           _______________________________________________________"<<endl;
        if (botsum-botdeck[0] >= 10) {
            cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                         |"<<endl;
            cout<<"                          |--------------                                         |"<<endl;
        }
        else {
            cout<<"                          | ? + "<<botsum-botdeck[0]<<" / 21 |                                          |"<<endl;
            cout<<"                          |-------------                                          |"<<endl;
        }
        cout<<"                          |                                                       |"<<endl;
        cout<<"                          |                 ";
        switch(bottotalcards) {
            case 2:
                bfalign(2);
                for (int i = 1; i <= 30; i++) 
                        cout<<" ";
                break;
            case 3:
                bfalign(3);
                for (int i = 1; i <= 26; i++) 
                        cout<<" ";
                break;
            case 4:
                bfalign(4);
                for (int i = 1; i <= 22; i++) 
                        cout<<" ";
                break;
            case 5:
                bfalign(5);
                for (int i = 1; i <= 18; i++) 
                        cout<<" ";
                break;
            case 6:
                bfalign(6);
                for (int i = 1; i <= 14; i++) 
                        cout<<" ";
                break;
    }
                cout<<"|"<<endl;
                for (int i = 0; i < 4; i++)
                    cout<<"                          |                                                       |"<<endl;
}

void showplayerdeck() {
        cout<<"                          |                 ";
        switch(totalcards) {
            case 2:
                align(2);
                for (int i = 1; i <= 30; i++) 
                        cout<<" ";
                cout<<"|"<<endl;
                cout<<"                          |_________                                              |"<<endl;
                if (playersum >= 10) 
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                else 
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                break;
            case 3:
                align(3);
                for (int i = 1; i <= 26; i++) 
                        cout<<" ";
                cout<<"|"<<endl;
                cout<<"                          |_________                                              |"<<endl;
               if (playersum >= 10) 
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                else 
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                break;
            case 4:
                align(4);
                for (int i = 1; i <= 22; i++) 
                        cout<<" ";
                cout<<"|"<<endl;
                cout<<"                          |_________                                              |"<<endl;
                if (playersum >= 10) 
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                else 
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                break;
            case 5:
                align(5);
                for (int i = 1; i <= 18; i++) 
                        cout<<" ";
                cout<<"|"<<endl;
                cout<<"                          |_________                                              |"<<endl;
                if (playersum >= 10) 
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                else 
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                break;
            case 6:
                align(6);
                for (int i = 1; i <= 14; i++) 
                        cout<<" ";
                cout<<"|"<<endl;
                cout<<"                          |_________                                              |"<<endl;
                if (playersum >= 10) 
                    cout<<"                          | "<<playersum<<" / 21 |                                             |"<<endl;
                else 
                    cout<<"                          | "<<playersum<<" / 21  |                                             |"<<endl;
                break;
        }
                    cout<<"		          |_________|_____________________________________________|"<<endl;
                    cout<<endl;
                    cout<<"				                 Player hand"<<endl;
                    cout<<endl;
    }
