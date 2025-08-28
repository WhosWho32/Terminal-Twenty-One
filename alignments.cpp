#include "header.h"
#include <iostream>
using std::cout;
using std::endl;
//For reference, for the case 1 2 the empty space is 30
void align(int c) {
    switch(c) {
    case 2:
        //Empty space 30
        cout<<deck[0];
        if (deck[0] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        cout<<deck[1];
        if (deck[1] < 10) {
            cout<<"   ";
        }
        else {
            cout<<"  ";
        }
        break;
    case 3:
        //Empty space 26
        align(2);
        cout<<deck[2];
        if (deck[2] < 10) {
            cout<<"   ";
        }
        else {
            cout<<"  ";
        }
        break;
    case 4:
        //Empty space 22
        align(3);
        cout<<deck[3];
        if (deck[3] < 10) {
            cout<<"   ";
        }
        else {
            cout<<"  ";
        }
        break;
    case 5:
        //Empty space 18
        align(4);
        cout<<deck[4];
        if (deck[4] < 10) {
            cout<<"   ";
        }
        else {
            cout<<"  ";
        }
        break;
    case 6:
        //Empty space 14
        align(5);
        cout<<deck[5];
        if (deck[5] < 10) {
            cout<<"   ";
        }
        else {
            cout<<"  ";
        }
        break;
    }

}
void bfalign(int bf) {
    switch (bf) {
    case 2:
        //Empty space 30
        cout<<"?"<<"   "<<botdeck[1];
        if (botdeck[1] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 3:
        //Empty space 26
        bfalign(2);
        cout<<botdeck[2];
        if (botdeck[2] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 4:
        //Empty space 22
        bfalign(3);
        cout<<botdeck[3];
        if (botdeck[3] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 5:
        //Empty space 18
        bfalign(4);
        cout<<botdeck[4];
        if (botdeck[4] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 6:
        //Empty space 14
        bfalign(5);
        cout<<botdeck[5];
        if (botdeck[5] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    }
}
void btalign(int bt) {
    switch (bt) {
    case 2:
        //Empty space 30
        cout<<botdeck[0];
        if (botdeck[0] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        cout<<botdeck[1];
        if (botdeck[1] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 3:
        //Empty space 26
        btalign(2);
        cout<<botdeck[2];
        if (botdeck[2] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 4:
        //Empty space 22
        btalign(3);
        cout<<botdeck[3];
        if (botdeck[3] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 5:
        //Empty space 18
        btalign(4);
        cout<<botdeck[4];
        if (botdeck[4] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    case 6:
        //Empty space 14
        btalign(5);
        cout<<botdeck[5];
        if (botdeck[5] < 10) {
            cout<<"   ";
        } else {
            cout<<"  ";
        }
        break;
    }
}

