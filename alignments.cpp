#include "header.h"
//For reference, for the case 1 2 the empty space is 30

void align(int c) {
    switch(c) {
        case 2:
            //Empty space 30
            cout<<deck[0];
            cout<<(deck[0] < 10 ? "   " : "  ");
            cout<<deck[1];
            cout<<(deck[1] < 10 ? "   " : "  ");
            break;
        case 3:
            //Empty space 26
            align(2);
            cout<<deck[2];
            cout<<(deck[2] < 10 ? "   " : "  ");
            break;
        case 4:
            //Empty space 22
            align(3);
            cout<<deck[3];
            cout<<(deck[3] < 10 ? "   " : "  ");
            break;
        case 5:
            //Empty space 18
            align(4);
            cout<<deck[4];
            cout<<(deck[4] < 10 ? "   " : "  ");
            break;
        case 6:
            //Empty space 14
            align(5);
            cout<<deck[5];
            cout<<(deck[5] < 10 ? "   " : "  ");
            break;
        }
}
void bfalign(int bf) {
    switch (bf) {
        case 2:
            //Empty space 30
            cout<<"?"<<"   "<<botdeck[1];
            cout<<(botdeck[1] < 10 ? "   " : "  ");
            break;
        case 3:
            //Empty space 26
            bfalign(2);
            cout<<botdeck[2];
            cout<<(botdeck[2] < 10 ? "   " : "  ");
            break;
        case 4:
            //Empty space 22
            bfalign(3);
            cout<<botdeck[3];
            cout<<(botdeck[3] < 10 ? "   " : "  ");
            break;
        case 5:
            //Empty space 18
            bfalign(4);
            cout<<botdeck[4];
            cout<<(botdeck[4] < 10 ? "   " : "  ");
            break;
        case 6:
            //Empty space 14
            bfalign(5);
            cout<<botdeck[5];
            cout<<(botdeck[5] < 10 ? "   " : "  ");
            break;
        }
}
void btalign(int bt) {
    switch (bt) {
        case 2:
            //Empty space 30
            cout<<botdeck[0];
            cout<<(botdeck[0] < 10 ? "   " : "  ");
            cout<<botdeck[1];
            cout<<(botdeck[1] < 10 ? "   " : "  ");
            break;
        case 3:
            //Empty space 26
            btalign(2);
            cout<<botdeck[2];
            cout<<(botdeck[2] < 10 ? "   " : "  ");
            break;
        case 4:
            //Empty space 22
            btalign(3);
            cout<<botdeck[3];
            cout<<(botdeck[3] < 10 ? "   " : "  ");
            break;
        case 5:
            //Empty space 18
            btalign(4);
            cout<<botdeck[4];
            cout<<(botdeck[4] < 10 ? "   " : "  ");
            break;
        case 6:
            //Empty space 14
            btalign(5);
            cout<<botdeck[5];
            cout<<(botdeck[5] < 10 ? "   " : "  ");
            break;
        }
}

