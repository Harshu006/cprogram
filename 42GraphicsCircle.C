/*Graphics Demo. (Works only in Borland Turbo C / c++ installation. ) copy EGAVGA.BGI to folder where .exe is created.
minimum program required for graphics is
-------------
   int gdriver = DETECT, gmode, errorcode;
   //initialize graphics screen
   initgraph(&gdriver, &gmode, "C:\\TC\\bgi"); or initgraph(&gdriver, &gmode, ""); if your installation is OK
   circle(100,100,60); // any graphics function
   getch();  //wait untill keypressed
   closegraph(); //return back to textmode screen
-------------

Graphics screen is created its extents are a rectangle 

   (0,0)+---------------------------------+ (maxx,0)
        |                                 |
        |                                 |
        |                                 |
        |                                 |
        |                                 |
(0,maxy)+---------------------------------+ (maxx,maxy)

you can get maxx by library functions 
   maxx = getmaxx();
   maxy = getmaxy();

   
*/

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int maxx, maxy;
   int radius = 100;
   int i;
   int left,right,top,bottom;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   maxx = getmaxx();
   maxy = getmaxy();

   midx = maxx / 2;
   midy = maxy / 2;
   setcolor(getmaxcolor());

   /* draw the five concentric circles with varying radius*/
   for(i=1;i<maxx;i+=7)
   {
    setcolor(i%12+1);
    circle(0,0,i);
    circle(0,maxy,i);
    circle(maxx,0,i);
    circle(maxx,maxy,i);
    circle(midx,midy,i);

    left = getmaxx() / 2 - i;
top = getmaxy() / 2 - i;
right = getmaxx() / 2 + i;
bottom = getmaxy() / 2 + i;
/*rectangle(left,top,right,bottom);*/

    delay(100);
    if(kbhit())
    {
      getch();
      closegraph();
      return;
    }
   }
   /* clean up */

   closegraph();
   return 0;
}
