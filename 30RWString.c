/*uses malloc to handle string - purely on pointers*/
#include "string.h"
#include "stdio.h"
main()
{
	char *ptr;
	int n;
	clrscr();
	printf("\nHow many characters to store... ");
	scanf("%d",&n);
	ptr = (char*)malloc(n*sizeof(char)); /*ask for memory from Operating System */
	if(NULL == ptr)
	{
		printf("\nAllocation failed, program exiting");
		return 0;
	}
	else
	{
		printf("\nAllocation OK! Enter the name to store \n [must include a blank space] : ");
		scanf("%s",ptr);
		printf("\n You entered [%s] as name.... gets() is the actual function for reading strings",ptr);
		getch();
		fflush(stdin);
		printf("\nPlease retype the name");
		gets(ptr);
		printf("\n You entered [%s] as name.... puts() is the actual function for writing strings\n",ptr);
		getch();
		puts(ptr);
		/*all done - return the memory honestly back to Operating System*/
		free(ptr);
	}
	getch();
	return -1;
}