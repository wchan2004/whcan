#include "screen.h"
#include <stdio.h>

int title(char* screen, int width, int height)
{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if(w == width - 1)
            {
                screen[w +(h * (width))] = '\n';
            }
            else
            {
                if(w == 0 || w == width - 2 || h == 0 || h== height -1)
                {
                    screen[w + (h * (width))] = '=';
                }
                else
                {
                    screen[w + (h * (width))] = ' ';
                }
            }
            w = w + 1;
        }
        w = 0;
        h = h + 1;
    }
    screen[height * width] = '\0';
    return 0;
}                        

int writeString(const char* string, char* screen, int width, int x, int y)
{
    int index = x + (y * width );
    
    int i = 0;

    while (string[i] != '\0')
    {
        screen[index + i] = string[i];
        i++;
    }
    
    return 0;
}

int menu(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("T h e", screen, width, 11, 2);
    writeString("w o r m  g a m e", screen, width, 6, 3);
    writeString("============================", screen, width,1,6);
    writeString("1. Game Start", screen, width,3,8);
    writeString("2. Explanation", screen, width,3,10);
    writeString("3. Exit", screen, width,3,12);    
}

int explanation(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("T h e", screen, width, 11, 2);
    writeString("w o r m  g a m e", screen, width, 6, 3);
    writeString("This game is moving,", screen, width, 4, 6);
    writeString("When I eat food", screen, width, 7, 7);
    writeString("The score increases.", screen, width, 4, 8);
    writeString("============================", screen, width,1,9);
    writeString("Do you want to leave?", screen, width, 4, 10);
    writeString("y|n", screen, width, 12, 11);
    writeString("1.Yes", screen, width, 2, 13);
    writeString("2.No", screen, width, 22, 13);    
}

int finish(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("Are you sure you want", screen, width, 4, 4);
    writeString("to quit the game?", screen, width, 6, 6);
    writeString("============================", screen, width,1,10);
    writeString("1.Yes", screen, width, 2, 12);
    writeString("2.No", screen, width, 22, 12);     
}