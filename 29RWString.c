/*Program 29: Reading writing strings
%s is allergic to blank spaces
alternative is gets() and puts().
You must include string.h
*/
#include "string.h"
#include "stdio.h"

main()
{
  char n[100]; /*get 20 place storage for string. [usable is 99, 1 byte for \0]*/
  clrscr();
  printf("\nEnter sentence (with spaces) : ");
  scanf("%s", n); /*scanf without & -> remember array name is its address, and scanf asks for address */
  printf("Your sentence is: %s",n); /*strings are internally processed as addresses always */
  printf("\nHopefully you got only first word.. now try again: ");
  fflush(stdin);
  gets(n);
  printf("\nYour sentence now is: ");
  puts(n);
  getch();
  /*try running this program without fflush(stdin)*/
}