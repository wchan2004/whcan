#include <stdio.h>
#include "screen.h"

int explain()
{
   char screen[5000];

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
           else if(a==2&&b==2)
           {
              screen[b]='T'; 
	        }
           else if(a==2&&b==4)
           {
              screen[b]='h'; 
	        }
           else if(a==2&&b==6)
           {
              screen[b]='e'; 
	        }
           else if(a==2&&b==10)
           {
              screen[b]='w'; 
	        }
           else if(a==2&&b==12)
           {
              screen[b]='o'; 
	        }
           else if(a==2&&b==14)
           {
              screen[b]='r'; 
	        }
           else if(a==2&&b==16)
           {
              screen[b]='m'; 
	        }
           else if(a==2&&b==20)
           {
              screen[b]='g'; 
	        }
           else if(a==2&&b==22)
           {
              screen[b]='a'; 
	        }
           else if(a==2&&b==24)
           {
              screen[b]='m'; 
	        }
           else if(a==2&&b==26)
           {
              screen[b]='e'; 
	        }
              else if(a==5&&b==4)
              {
                 screen[b]='T'; 
	           }
              else if(a==5&&b==5)
              {
                 screen[b]='h'; 
	           }
              else if(a==5&&b==6)
              {
                 screen[b]='i'; 
	           }
              else if(a==5&&b==7)
              {
                 screen[b]='s'; 
	           }
              else if(a==5&&b==9)
              {
                 screen[b]='g'; 
	           }
              else if(a==5&&b==10)
              {
                 screen[b]='a'; 
	           }
              else if(a==5&&b==11)
              {
                 screen[b]='m'; 
	           }
              else if(a==5&&b==12)
              {
                 screen[b]='e'; 
	           }
              else if(a==5&&b==14)
              {
                 screen[b]='i'; 
	           }
              else if(a==5&&b==15)
              {
                 screen[b]='s'; 
	           }
              else if(a==5&&b==17)
              {
                 screen[b]='m'; 
	           }
              else if(a==5&&b==18)
              {
                 screen[b]='o'; 
	           }
              else if(a==5&&b==19)
              {
                 screen[b]='v'; 
	           }
              else if(a==5&&b==20)
              {
                 screen[b]='i'; 
	           }
              else if(a==5&&b==21)
              {
                 screen[b]='n'; 
	           }
              else if(a==5&&b==22)
              {
                 screen[b]='g'; 
	           }
              else if(a==5&&b==23)
              {
                 screen[b]=','; 
	           }
                  else if(a==6&&b==6)
                  {
                     screen[b]='W'; 
	               }
                  else if(a==6&&b==7)
                  {
                     screen[b]='h'; 
	               }
                  else if(a==6&&b==8)
                  {
                     screen[b]='e'; 
	               }
                  else if(a==6&&b==9)
                  {
                     screen[b]='n'; 
	               }
                  else if(a==6&&b==11)
                  {
                     screen[b]='I'; 
	               }
                  else if(a==6&&b==13)
                  {
                     screen[b]='e'; 
	               }
                  else if(a==6&&b==14)
                  {
                     screen[b]='a'; 
	               }
                  else if(a==6&&b==15)
                  {
                     screen[b]='t'; 
	               }
                  else if(a==6&&b==17)
                  {
                     screen[b]='f'; 
	               }
                  else if(a==6&&b==18)
                  {
                     screen[b]='o'; 
	               }
                  else if(a==6&&b==19)
                  {
                     screen[b]='o'; 
	               }
                  else if(a==6&&b==20)
                  {
                     screen[b]='d'; 
	               }
                  else if(a==4&&b==1)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==2)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==3)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==4)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==5)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==6)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==7)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==8)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==9)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==10)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==11)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==12)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==13)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==14)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==15)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==16)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==17)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==18)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==19)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==20)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==21)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==22)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==23)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==24)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==25)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==26)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==27)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==28)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==4&&b==29)
                  {
                     screen[b]='-'; 
	               }
                                

                  else if(a==7&&b==1)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==2)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==3)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==4)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==5)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==6)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==7)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==8)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==9)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==10)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==11)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==12)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==13)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==14)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==15)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==16)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==17)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==18)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==19)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==20)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==21)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==22)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==23)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==24)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==25)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==26)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==27)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==28)
                  {
                     screen[b]='-'; 
	               }
                  else if(a==7&&b==29)
                  {
                     screen[b]='-'; 
	               }





                                

                         else if(a==7&&b==4)
                         {
                               screen[b]='T'; 
	                      }
                         else if(a==7&&b==5)
                         {
                               screen[b]='h'; 
	                      }
                         else if(a==7&&b==6)
                         {
                               screen[b]='e'; 
	                      }
                         else if(a==7&&b==8)
                         {
                               screen[b]='s'; 
	                      }
                         else if(a==7&&b==9)
                         {
                               screen[b]='c'; 
	                      }
                         else if(a==7&&b==10)
                         {
                               screen[b]='o'; 
	                      }
                         else if(a==7&&b==11)
                         {
                               screen[b]='r'; 
	                      }
                         else if(a==7&&b==12)
                         {
                               screen[b]='e'; 
	                      }
                         else if(a==7&&b==14)
                         {
                               screen[b]='i'; 
	                      }
                         else if(a==7&&b==15)
                         {
                               screen[b]='n'; 
	                      }
                         else if(a==7&&b==16)
                         {
                               screen[b]='c'; 
	                      }
                         else if(a==7&&b==17)
                         {
                               screen[b]='r'; 
	                      }
                         else if(a==7&&b==18)
                         {
                               screen[b]='e'; 
	                      }
                         else if(a==7&&b==19)
                         {
                               screen[b]='a'; 
	                      }
                         else if(a==7&&b==20)
                         {
                               screen[b]='s'; 
	                      }
                         else if(a==7&&b==21)
                         {
                               screen[b]='e'; 
	                      }
                         else if(a==7&&b==22)
                         {
                               screen[b]='s'; 
	                      }
                         else if(a==7&&b==23)
                         {
                               screen[b]='.'; 
	                      }
                             else if(a==10&&b==4)
                             {
                                    screen[b]='R'; 
	                          }
                             else if(a==10&&b==5)
                             {
                                    screen[b]='e'; 
	                          }
                             else if(a==10&&b==6)
                             {
                                    screen[b]='t'; 
	                          }
                             else if(a==10&&b==7)
                             {
                                    screen[b]='y'; 
	                          }
                             else if(a==10&&b==8)
                             {
                                    screen[b]='r'; 
	                          }
                             else if(a==10&&b==9)
                             {
                                    screen[b]='e'; 
	                          }
                             else if(a==10&&b==11)
                             {
                                    screen[b]='i'; 
	                          }
                             else if(a==10&&b==12)
                             {
                                    screen[b]='n'; 
	                          }
                             else if(a==10&&b==13)
                             {
                                    screen[b]='c'; 
	                          }
                             else if(a==10&&b==14)
                             {
                                    screen[b]='r'; 
	                          }
                             else if(a==10&&b==15)
                             {
                                    screen[b]='e'; 
	                          }
                             else if(a==10&&b==16)
                             {
                                    screen[b]='a'; 
	                          }
                             else if(a==10&&b==17)
                             {
                                    screen[b]='s'; 
	                          }
                             else if(a==10&&b==18)
                             {
                                    screen[b]='e'; 
	                          }
                             else if(a==10&&b==19)
                             {
                                    screen[b]='s'; 
	                          }
                             else if(a==10&&b==20)
                             {
                                    screen[b]='.'; 
	                          }
                                    else if(a==11&&b==4)
                                    {
                                            screen[b]='1'; 
	                                 }
                                    else if(a==11&&b==5)
                                    {
                                            screen[b]='.'; 
	                                 }
                                    else if(a==11&&b==7)
                                    {
                                            screen[b]='Y'; 
	                                 }
                                    else if(a==11&&b==8)
                                    {
                                            screen[b]='e'; 
	                                 }
                                    else if(a==11&&b==9)
                                    {
                                            screen[b]='s'; 
	                                 }
                                          else if(a==12&&b==4)
                                          {
                                                   screen[b]='2'; 
	                                       }
                                          else if(a==12&&b==5)
                                          {
                                                   screen[b]='.'; 
	                                       }
                                          else if(a==12&&b==7)
                                          {
                                                   screen[b]='N'; 
	                                       }
                                          else if(a==12&&b==8)
                                          {
                                                   screen[b]='o'; 
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
