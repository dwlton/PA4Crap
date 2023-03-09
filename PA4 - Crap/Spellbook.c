#include "spellbook.h"

/*
The Main Function File!

here are the functions needed for the craps game! jk, the craps game is in main, these functions make the game pretty... or they would if they worked.
*/

void Mental_Prison(int width, int height, int zoom) //locks the window size and zoom in place
{
    //Mental_Prison doesn't work... i've tried 3 dif techniques and tutorials... here is some example code i was trying to no avail:
    
    //// get the console window handle and DPI scaling level
    //HWND consoleWindow = GetConsoleWindow();
    //if (consoleWindow == NULL) {
    //    DWORD error = GetLastError();
    //    printf("GetConsoleWindow failed: %d\n", error);
    //    return;
    //}

    //UINT dpi = GetDpiForWindow(consoleWindow);
    //printf("consoleWindow: %p\n", consoleWindow);
    //printf("dpi: %d\n", dpi);

    //// calculate the desired window size based on DPI scaling and zoom level
    //int scaledWidth = MulDiv(width, dpi, 96) * zoom / 100;
    //int scaledHeight = MulDiv(height, dpi, 96) * zoom / 100;
    //printf("scaledWidth: %d\n", scaledWidth);
    //printf("scaledHeight: %d\n", scaledHeight);

    //// set the console buffer size
    //COORD bufferSize = { width, height };
    //if (!SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), bufferSize)) {
    //    printf("SetConsoleScreenBufferSize failed: %d\n", GetLastError());
    //}

    //// set the console window size and position
    //if (!MoveWindow(consoleWindow, 0, 0, scaledWidth, scaledHeight, TRUE)) {
    //    printf("MoveWindow failed: %d\n", GetLastError());
    //}

    //// set the console zoom level
    //if (consoleWindow, WM_SYSCOMMAND, SC_ZOOM, zoom) {
    //    printf("SendMessage failed: %d\n", GetLastError());
    //}

    //// lock the console window to the fixed size
    //DWORD consoleMode;
    //if (!GetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), &consoleMode)) {
    //    printf("GetConsoleMode failed: %d\n", GetLastError());
    //}
    //consoleMode &= ~ENABLE_WINDOW_INPUT;
    //if (!SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), consoleMode)) {
    //    printf("SetConsoleMode failed: %d\n", GetLastError());
    //}
}
void Programmed_Illusion(int bit_map[IMAGE_X][IMAGE_Y], char overlay[IMAGE_X][IMAGE_Y]) {
    for (int j = 0; j < IMAGE_Y; j++) { //go line by line for
        for (int i = 0; i < IMAGE_X; i++) { //charater by charater within line by line...
            switch (bit_map[i][IMAGE_Y - 1 - j]) {
            case 0: // black 
                printf(CO_BLACK "%c", overlay[i][j], CO_NULL);  //print the color tile(black) with the charater from simmulacrum inside
                break;
            case 1:  // red
                printf(CO_RED "%c", overlay[i][j], CO_NULL);
                break;
            case 2:  // green
                printf(CO_GREEN "%c", overlay[i][j], CO_NULL);
                break;
            case 3: // yellow
                printf(CO_YELLOW "%c", overlay[i][j], CO_NULL);
                break;
            case 4: // blue
                printf(CO_BLUE "%c", overlay[i][j], CO_NULL);
                break;
            case 5: // magenta
                printf(CO_MAGENTA "%c", overlay[i][j], CO_NULL);
                break;
            case 6: // cyan
                printf(CO_CYAN "%c", overlay[i][j], CO_NULL);
                break;
            case 7: // white
                printf(CO_WHITE "%c", overlay[i][j], CO_NULL);
                break;
            default:
                printf(CO_NULL "#");
                break;
            }
        }
        printf("\x1b[0m\n"); // reset color and newline
    }
}
void Scrying(FILE* filename, int bit_map[IMAGE_X][IMAGE_Y])  { //reads the enitre .bmp into an array... 
    uint8_t header[54]; //using UintB_t and Uint32_t which are struct types that corrispond to the red green blue values of the 24-bit color .bmp
    fread(header, sizeof(uint8_t), 54, filename); //the internet told me use 24-bit color cuz it would be easier than either 256 or 8 bit color becouse of "file header length"
    
    uint32_t width = *(uint32_t*)&header[18]; // so here we decapitate the file before we read it 
    uint32_t height = *(uint32_t*)&header[22];

    uint32_t row_padding = (4 - (width * 3) % 4) % 4; 
    uint8_t buffer[3];
    int i, j;
    for (j = 0; j < IMAGE_Y; j++) {
        for (i = 0; i < IMAGE_X; i++) {
            fread(buffer, sizeof(uint8_t), 3, filename);
            uint8_t b = buffer[0];
            uint8_t g = buffer[1];
            uint8_t r = buffer[2];

            if (r < 128 && g < 128 && b < 128) {
                bit_map[i][j] = 0; // black
            }
            else if (r > 128 && g < 128 && b < 128) {
                bit_map[i][j] = 1; // red
            }
            else if (r < 128 && g > 128 && b < 128) {
                bit_map[i][j] = 2; // green
            }
            else if (r > 128 && g > 128 && b < 128) {
                bit_map[i][j] = 3; // yellow
            }
            else if (r < 128 && g < 128 && b > 128) {
                bit_map[i][j] = 4; // blue
            }
            else if (r > 128 && g < 128 && b > 128) {
                bit_map[i][j] = 5; // magenta
            }
            else if (r < 128 && g > 128 && b > 128) {
                bit_map[i][j] = 6; // cyan
            }
            else {
                bit_map[i][j] = 7; // white
            }
        }
        fseek(filename, row_padding, SEEK_CUR);
    }   
}
void Silent_Image(int bit_map[IMAGE_X][IMAGE_Y]) { // a test printer, for making sure each step allong the way and AAA
    for (int i = 0; i < IMAGE_Y; i++) { //WHY does this printer work... and the one above it that is the SAME but for %c...
        for (int j = 0; j < IMAGE_X; j++) { // tottally print WTF is going on
            switch (bit_map[j][IMAGE_Y - 1 - i]) {
            case 0:
                printf(CO_BLACK " ");
                break;
            case 1:
                printf(CO_RED " ");
                break;
            case 2:
                printf(CO_GREEN " ");
                break;
            case 3:
                printf(CO_YELLOW "  ");
                break;
            case 4:
                printf(CO_BLUE "  ");
                break;
            case 5:
                printf(CO_MAGENTA " ");
                break;
            case 6:
                printf(CO_CYAN " ");
                break;
            case 7:
                printf(CO_WHITE " ");
                break;
            default:
                printf(CO_NULL "#");
                break;
            }
        }
        printf("\x1b[0m\n"); // reset color and newline
    }
}
