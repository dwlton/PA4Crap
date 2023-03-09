#include "Spellbook.h"

/*
Simulacrum is anticipated to become so large it needed its own file...
It was supposed to generate a matrix of char that would overlay over the ascii art game board and add the text present on a gameboard as well as display the current game state
it takes all variables of the craps grame in becouse it was supposed to display all of them on the board
*/

void Simulacrum(char overlay[IMAGE_X][IMAGE_Y], int balance, int bet, int die1, int die2, int sum, int pnt) {
    // ASCII art strings for each line
    const char* line[33] = {
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "              6 6    4     5   SIX   8  NINE  10                        4     5   SIX   8  NINE  10    6 6           ",
    "      P                                                                                                       P      ",
    "      A                                                                                                       A      ",
    "      S   6                                                                                               6   S      ",
    "      S                C O M E                                                         C O M E                S      ",
    "          6                                                                                               6          ",
    "      L                                                                                                       L      ",
    "      I                                                                                                       I      ",
    "      N                                                                                                       N      ",
    "      E                                                                                                       E      ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                        THIS IS HELL TO TYPE OUT BY HAND                                                             ",
    "                                                                                                                     ",
    "                                     WHEN MY PRINT DOESNT EVEN WORK                                                  ",
    "                                                                                                                     ",
    "                                                AAAAAAAAAAAAAAAAAAAAA                                                ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    "                                                                                                                     ",
    };

    for (int i = 0; i < IMAGE_X; i++) {
        for (int j = 0; j < IMAGE_Y; j++) {
            overlay[i][j] = line[j][i];
        }
    }
    //another part of the functuion that passes the different input variables to the right part of the board
    //and a part that prints the current promt in the bottom few lines of the image...
    //it would have to pass the variable to the exact overlay[x][y] it needed...
}
