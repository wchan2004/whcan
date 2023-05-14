#include <stdio.h>
#include "screen.h"

int menu()
{
        char screen[500];

        int a = 0;
	while(a<15)
        {
                int b = 0;
                while(b<30)
                {
                        if(a==0||a==14)
                        {
                                screen[b]='*';
                        }
                        else if(b==0||b==29)
                        {
                                screen[b]='*';
                        }
			else if(a==3&&b==5)
		        {
                                screen[b]='T';
			}
			else if(a==3&&b==6)
			{
                                screen[b]='h';
			}
			else if(a==3&&b==7)
			{
                                screen[b]='e';
                        }
			else if(a==3&&b==9)
                        { 
                                screen[b]='w';
                        }
                        else if(a==3&&b==10)
                        {
				screen[b]='o';
                        }
                        else if(a==3&&b==11)
                        {
                                screen[b]='r';
                        }
                        else if(a==3&&b==12)
                        {
                                screen[b]='m';
                        }
                        else if(a==3&&b==13)
                        {
                                screen[b]='g';
                        }
                        else if(a==3&&b==15)
                        {
                                screen[b]='a';
                        }
                        else if(a==3&&b==16)
                        {
                                screen[b]='m';
                        }
                        else if(a==3&&b==17)
                        {
                                screen[b]='e';
                        }
			else if(a==8&&b==5)
                        {
                               screen[b]='1';
                        }
			else if(a==8&&b==6)
			{
                               screen[b]='.';
			}
			else if(a==8&&b==8)
			{
                               screen[b]='G';
			}
			else if(a==8&&b==9)
			{
                               screen[b]='a';
			}
			else if(a==8&&b==10)
			{
                               screen[b]='m';
			}
			else if(a==8&&b==11)
			{
                               screen[b]='e';
			}
			else if(a==8&&b==13)
			{
                               screen[b]='s';
			}
			else if(a==8&&b==14)
			{
                               screen[b]='t';
			}
                        else if(a==8&&b==15)
			{
                               screen[b]='a';
			}
                        else if(a==8&&b==16)
			{
                               screen[b]='r';
			}
                        else if(a==8&&b==17)
			{
                               screen[b]='t';
			}
                        else if(a==9&&b==5)
			{
                               screen[b]='2';
			}
                        else if(a==9&&b==6)
			{
                               screen[b]='.';
			}
                        else if(a==9&&b==8)
			{
                               screen[b]='E';
			}
                        else if(a==9&&b==9)
			{
                               screen[b]='x';
			}
                        else if(a==9&&b==10)
			{
                               screen[b]='p';
			}
                        else if(a==9&&b==11)
			{
                               screen[b]='l';
			}
                        else if(a==9&&b==12)
			{
                               screen[b]='a';
			}
                        else if(a==9&&b==13)
			{
                               screen[b]='i';
			}
                        else if(a==9&&b==14)
			{
                               screen[b]='n';
			}
                        else if(a==10&&b==5)
			{
                               screen[b]='3';
			}
                        else if(a==10&&b==6)
			{
                               screen[b]='.';
			}
                        else if(a==10&&b==8)
			{
                               screen[b]='E';
			}
                        else if(a==10&&b==9)
			{
                               screen[b]='x';
			}
                        else if(a==10&&b==10)
			{
                               screen[b]='i';
			}
                        else if(a==10&&b==11)
			{
                               screen[b]='t';
			}
                        else
			{
                                screen[b]=' ';
			}
                        b+=1;
                }

                screen[30]='\n';
                a+=1;
                printf("%s",screen);
        }

        return 0;
}

