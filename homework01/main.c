#include <stdio.h>
#include "screen.h"
#include <stdlib.h>

int main()
{
    char screen[30*15+1];
    int width = 30;
    int height = 15;
    int game = 1;

    char input;
    title(screen, width, height);
    menu(screen,width,height);
    system("cls");

    while(game)
    {
        printf("%s\nPlease input: ", screen);
        scanf(" %c", &input);

        if(input == '2')
        {
            system("cls");
            title(screen, width, height);
            explanation(screen,width,height);

            printf("%s\nPlease input: ", screen);
            scanf(" %c", &input);
            
            if(input == '1')
            {
                system("cls");
                title(screen, width, height);
                menu(screen,width,height);
            }
            else if(input == '2')
            {
                system("cls");
                title(screen, width, height);
                explanation(screen,width,height);
            }
        }
        else if(input == '3')
        {
            system("cls");
            title(screen, width, height);
            finish(screen,width,height);

            printf("%s\nPlease input: ", screen);
            scanf(" %c", &input);

            if(input == '1')
            {
                game = 0;
            }
            else if(input == '2')
            {
                system("cls");
                title(screen, width, height);
                menu(screen,width,height);
            }
        }
    }

    return 0;
}