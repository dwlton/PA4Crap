/*
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                               A spellbook is a key tool for a wizard, containing their knowledge of spells and                                                                          [Comments]
[Comments]                               incantations that they have learnedand developed over time. Here are some reasons                                                                         [Comments]
[Comments]                               why a wizard must never lose their spellbook:                                                                                                             [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                  1. Spells are their primary weapon: Spells are a wizard's primary weapon, and their spellbook                                                          [Comments]
[Comments]                                     is the source of all their spells. Without their spellbook, a wizard is unable to cast any                                                          [Comments]
[Comments]                                     spells beyond those they have already memorized.                                                                                                    [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                  2. Unique spells: A wizard's spellbook is also unique to them, containing their personal                                                               [Comments]
[Comments]                                     collection of spells and incantations.Losing their spellbook means losing their unique                                                              [Comments]
[Comments]                                     knowledge and power, which can be devastating in a world where magical knowledge                                                                    [Comments]
[Comments]                                     is highly prized.                                                                                                                                   [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                  3. Continuous study: A spellbook is a record of a wizard's continuous study and                                                                        [Comments]
[Comments]                                     experimentation with magic. It contains their notes, observations, and insights that                                                                [Comments]
[Comments]                                     they have gained over time, which can be invaluable in solving complex magical                                                                      [Comments]
[Comments]                                     problems or discovering new spells.                                                                                                                 [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                  4. Security: A wizard's spellbook can also contain highly sensitive information, such as                                                               [Comments]
[Comments]                                     secret spells or forbidden knowledge. If a wizard were to lose their spellbook, it could                                                            [Comments]
[Comments]                                     fall into the wrong handsand put both the wizardand others in danger.                                                                               [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                  5. Symbolic value: A wizard's spellbook can also have symbolic value, representing their                                                               [Comments]
[Comments]                                     identity as a wizard and their place in the magical community.Losing their spellbook                                                                [Comments]
[Comments]                                     can be seen as a loss of status or identity, which can have a psychological impact on                                                               [Comments]
[Comments]                                     the wizard.                                                                                                                                         [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                               In conclusion, a wizard's spellbook is a vital tool that contains their unique knowledge                                                                  [Comments]
[Comments]                               and power. Losing their spellbook can have significant consequences, both practical                                                                       [Comments]
[Comments]                               and symbolic, and can severely limit their ability to cast spells and function as a                                                                       [Comments]
[Comments]                               wizard.                                                                                                                                                   [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                                                                                                                                                                         [Comments]
[Comments]                                                                                                                                                                                         [Comments]
*/

#define _CRT_SECURE_NO_WARNINGS
#define STB_IMAGE_IMPLEMENTATION  //dunno but the stb_image.h library said i needed it
#define STBI_ASSERT(x) //dunno but the stb_image.h library said i needed it

#include <stdio.h> 
#include <stdlib.h>
#include <stdint.h>
#include <time.h>  //for rand
#include <windows.h> // to control window size // not acttually in use
#include <conio.h>

//#include "stb_image.h"
//#include "Cantrips.h"  //small functions live here
//#include "SpellComponents.h"
#include "ChromaticOrb.h" //color definitions less important now that its only 8 color, but this file defines all the text colors used to make the craps game

static inline int stbi_load(const char* filename, int* x, int* y, int* comp, int req_comp);// some way i had to include the lib to stop it crashing... i wanted to use #include 
// this entire 7000 line library just for struct type uint32_t

#ifndef IMAGE_SIZE
#define IMAGE_X  117
#define IMAGE_Y 33
#endif 

//void Mental_Prison(int width, int height, int zoom); //sets and holds the window size at a constant to avoid ascii art line squeing 
void Programmed_Illusion(int bit_map[IMAGE_X][IMAGE_Y], char overlay[IMAGE_X][IMAGE_Y]); // combines simulacrum and scrying outputs and prints them
void Scrying(FILE* filename, int bit_map[IMAGE_X][IMAGE_Y]); //turns a bmp into a array with 8 colors
void Silent_Image(int bit_map[IMAGE_X][IMAGE_Y]);  // prints ONLY the image, not the game text
void Simulacrum(char overlay[IMAGE_X][IMAGE_Y], int balance, int bet, int die1, int die2, int sum, int pnt);