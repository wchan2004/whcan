#include <stdio.h>
int main()
{
    char screen[500];/*가로 : 30 세로 : 15 */
    int i = 0 , a = 0;
    while(i<464){

	    screen[i]='0';
	    i=i+1;
    }
    while(a<15){
        
        screen[31*a-1]='\n';
	    a=a+1;
    }
    printf("%s\ndone.",screen);
    return 0;
}

