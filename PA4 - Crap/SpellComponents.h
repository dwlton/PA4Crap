#include "Spellbook.h"

/*
Simulacrum is anticipated to become so large it needed its own file...
It was supposed to generate a matrix of char that would overlay over the ascii art game board and add the text present on a gameboard as well as display the current game state
it takes all variables of the craps grame in becouse it was supposed to display all of them on the board
*/

void Simulacrum(char overlay[IMAGE_X][IMAGE_Y], int balance, int bet, int die1, int die2, int sum, int pnt) {
    // ASCII art strings for each line
    char line1[] = "                                                                                                                     ";
    char line2[] = "                                                                                                                     ";
    char line3[] = "                                                                                                                     ";
    char line4[] = "                                                                                                                     ";
    char line5[] = "                                                                                                                     ";
    char line6[] = "                                                                                                                     ";
    char line7[] = "                                                                                                                     ";
    char line8[] = "                                                                                                                     ";
    char line9[] = "              6 6    4     5   SIX   8  NINE  10                        4     5   SIX   8  NINE  10    6 6           ";
    char line10[] = "      P                                                                                                       P      ";
    char line11[] = "      A                                                                                                       A      ";
    char line12[] = "      S   6                                                                                               6   S      ";
    char line13[] = "      S                C O M E                                                         C O M E                S      ";
    char line14[] = "          6                                                                                               6          ";
    char line15[] = "      L                                                                                                       L      ";
    char line16[] = "      I                                                                                                       I      ";
    char line17[] = "      N                                                                                                       N      ";
    char line18[] = "      E                                                                                                       E      ";
    char line19[] = "                                                                                                                     ";
    char line20[] = "                                                                                                                     ";
    char line21[] = "                                                                                                                     ";
    char line22[] = "                                                                                                                     ";
    char line23[] = "                        THIS IS HELL TO TYPE OUT BY HAND                                                             ";
    char line24[] = "                                                                                                                     ";
    char line25[] = "                                     WHEN MY PRINT DOESNT EVEN WORK                                                  ";
    char line26[] = "                                                                                                                     ";
    char line27[] = "                                                AAAAAAAAAAAAAAAAAAAAA                                                ";
    char line28[] = "                                                                                                                     ";
    char line29[] = "                                                                                                                     ";
    char line30[] = "                                                                                                                     ";
    char line31[] = "                                                                                                                     ";
    char line32[] = "                                                                                                                     ";
    char line33[] = "                                                                                                                     ";

    for (int i = 0; i < IMAGE_X; i++) {
        for (int j = 0; j < IMAGE_Y; j++) {
            overlay[i][j] = line1[i];
        }
    }
    //another part of the functuion that passes the different input variables to the right part of the board
    //and a part that prints the current promt in the bottom few lines of the image...
    //it would have to pass the variable to the exact overlay[x][y] it needed...
}
