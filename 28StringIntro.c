/*Program 28: Strings introduction.
Strings are character arrays, terminating by '\0' ...the null character
Character is 1 byte data. strings are sequence of 1D character arrays
Note: fflush(stdin) clears ENTER keys hanging over channel after scanf() works. STDIN is Standard Input .. your keyboard.
*/
#include "stdio.h"

main()
{
	char c;
	char text[] = {'H', 'E', 'L', 'L', 'O', '-','W','O','R','L','D'};/*11 characters*/
	char n[20];
	int count,i;
	clrscr();
	/*work with single string*/
	printf("\nEnter a character: "); scanf("%c", &c);
	printf("\nYou wrote character %c",c);
	/*work with character arrays*/
	printf("\nPrinting 1-D Arrays..");
	for(i=0;i<11;i++)
	{
		printf("%c",text[i]);
	}
	/*read write character array*/
	printf("\nEnter how many characters to read [MAX 11 Allowed]: ");
	scanf("%d",&count);
	fflush(stdin);
	for(i=0;i<count;i++)
	{
		printf("\nEnter character [%d]: ",i);
		scanf("%c",&text[i]);
		fflush(stdin);
	}
	printf("\nNow printing your 1-D Array of characters..");
	printf("\nYou might see previous values in array");
	for(i=0;i<11;i++)
	{
		printf("%c",text[i]);
	}
	printf("\nworking with character arrays is tedious task... reworking as STRINGS");
	printf("\nEnter text with not more than 10 characters: "); /*NOT 11 but 10 here. 1 byte (position) is sacrificed for storing '\0' NULL character*/
	scanf("%s",text); /*Array name is itself an address, so writing &text here is ambigious. ALSO %s is sensitive(allergic) to BLANKS */
	printf("\nYou entered: %s",text);
	getch();

}
