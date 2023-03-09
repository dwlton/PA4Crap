																				/*
[Comments]															   [Comments]
[Comments]															   [Comments]
[Comments]															   [Comments]
[Comments]                       Main(Magi.c)						   [Comments]
[Comments]															   [Comments]
[Comments]                 Programmer: Dalton Lubash				   [Comments]
[Comments]                  Assignment : PA4 - Craps				   [Comments]
[Comments]                      Class : CPT_S 121					   [Comments]
[Comments]                  Professor : Andy 0'Fallon                  [Comments]
[Comments]                     TA : Michael Bykov					   [Comments]
[Comments]															   [Comments]
[Comments]       This program will allow the user to play craps		   [Comments]
[Comments]          indefinitely for endless entertainment.			   [Comments]
[Comments]															   [Comments]
[Comments]															   [Comments]
[Comments]															   [Comments]
																				*/

#include "Spellbook.h"
#include "SpellComponents.h"
#define D 6 //number of sides in a die if your boring i guess

//Cantrips,   not powerful enough to keep in the spellbook 
			  //(and not that it called the same value endlessly in spellbook...)
int Guidance(int max) { //uses current time to seed a random number between 1 and the max
	return rand() % max + 1;
}

void /*void*/ main(void /*void*/ ) {

	//prepare your cantrips at the start of the day
	srand(time(NULL));

	FILE* board = fopen("board.bmp", "rb");

	char input;
	char** overlay[IMAGE_X][IMAGE_Y];
	int balance = 0, bet = 0, die1 = 0, die2 = 0, sum = 0, pnt = 0;
	int** bit_map[IMAGE_X][IMAGE_Y];

	balance = 1000; // set the starting balance to $1000
	
	Scrying(board, bit_map);
	Simulacrum(overlay, balance, bet, die1, die2, sum, pnt);
	Programmed_Illusion(bit_map, overlay);
	printf("\nwelcome!\nYou have $%d. Type a bet to play.\n", balance);

	

	do {

		scanf("%d", &bet);
		system("pause");
		system("cls");
		Silent_Image(bit_map);

		//craps game
		if (bet > balance) {
			printf("That bet is more than you're worth, I guess you're all in for $%d\n", balance);
			bet = balance;
		}
		die1 = Guidance(D);
		die2 = Guidance(D);
		sum = die1 + die2;
		if (sum == 7 || sum == 11) {
			printf("You rolled %d and %d for a total of %d! You win!\n", die1, die2, sum);
			balance += bet;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			printf("You rolled %d and %d for a total of %d! You lose!\n", die1, die2, sum);
			balance -= bet;
		}
		else {
			pnt = sum;
			printf("You rolled %d and %d for a total %d. The point is now %d.\n", die1, die2, sum, pnt);
				die1 = Guidance(D);
				die2 = Guidance(D);
				sum = die1 + die2;
				printf("You rolled %d and %d for a total %d.\n", die1, die2, sum);
				if (sum == pnt) {
					printf("You rolled the point! You win!\n");
					balance += bet;
				}
				else if (sum == 7) {
					printf("You rolled a 7! You lose!\n");
					balance -= bet;
				}
		}
		printf("\nYou have $%d. Type a bet to play.\n", balance);
	} while (balance > 0);
    fclose(board);
	return;
}
