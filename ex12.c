#include <stdio.h>
#include <conio.h>

int main()
{
    /*
      Declaration of variables used
    */
 
    showframe(12,25);
    printf("\nPlayer 1, enter your name:"); fgets(name[0], 30, stdin);
    printf("\nPlayer 2, enter your name:"); fgets(name[1], 30, stdin);
 
    printf("\n%s, you take 0",name[0]);
    printf("\n%s, you take X",name[1]); getch();
 
    clrscr();
 
    do
    {
       while(!enter)
       {
         if(khbit())
          ch = getch();
        
           switch(ch)
           {
             case UPARROW : box = navigate(a[3][3], box, player, UPARROW);
             .
             .
             .
           }
       }
       if(quit) break;
       //check if the player wins
       win = checkforwin(a);
    
     }while(!win)
 
    if(win)
    { .
      .
    }
 
    else if(quit)
    {    .
         .
    }
 
 return 0;
}