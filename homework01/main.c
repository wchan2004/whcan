#include <stdio.h>
#include "screen.h"

int main()
{
    menu();
    int game_state = 1;
    int input = 0;
    while (game_state)
    {
        scanf("%d",&input);
        if(input==2)
        {
            explain();
            while(game_state)
            {
                scanf("%d",&input);
                if (input==1)
                {
                    menu();
                    game_state=0;
                }
                else if(input==2)
                {
                    explain();
                }
                else
                {
                    game_state=1;
                }
            }
            game_state=1;

        }
        if(input==3)
        {

                game_state=0;
         
        }
    }
    return 0;
}	