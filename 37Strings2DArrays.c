/* 2-D arrays using pointers 
interchange of strings using pointers is an operation that requires no physical movement of strings
only pointers are moved (like instead of changing the data around, we change labels of containers of data)

Memory map of names array (array of character pointers pointing to some character strings :
|0|1|2|3|4|5|
 ^ ^ ^ ^ ^ ^------------------------------------------------------------------------------\
 | | | | \--------------------------------------------------------------\                 |
 | | | \----------------------------------------------\                 |                 |
 | | \------------------------------\                 |                 |                 |
 | \------------\                   |                 |                 |                 |
 |              |                   |                 |                 |                 |
"JIMMY is ..." "TIGER is ..."      "SPIKEY is ..."   "BRUTUS is..."    "SNOOPY is..."    "CRYSTAL is...."

	(Note that the string placements are random and thats why irregular spaces are shown in display.)
so for rearrangements, instead of moving the actual strings if you can move the lines (pointers)
it is less work to do (so we achieve efficiency).

*/
#include "string.h"
#include "stdio.h"
main()
{

	char *ptr;
	int i,src,dest;
	char *tempptr;
	char *names[] = {
     "JIMMY is a German Shephard",
     "TIGER is a Lebrador",
     "SPIKEY is a BullDog",
     "BRUTUS is an American Eskimo Dog",
     "SNOOPY is a Pug",
     "CRYSTAL is a Plott Hound "
	};
	clrscr();
	for(i=0;i<6;i++)
	{
   	ptr = *(names+i);
		printf("\n Name[%d] = %s ",i,ptr );
	}
	/*interchange which name with what?*/
	printf("\nInterchange Names");
	fflush(stdin);
	printf("\nEnter source      [0-5] : "); scanf("%d",&src);
	printf("\nEnter destination [0-5] : "); scanf("%d",&dest);
	tempptr = *(names+src);
	*(names+src) = *(names+dest);
	*(names+dest) = tempptr;
   	for(i=0;i<6;i++)
	{
		ptr = *(names+i);
		printf("\n Name[%d] = %s ",i,ptr );
	}
	getch();
}