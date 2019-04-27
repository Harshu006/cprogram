/*Calculate the number of spaces tabs and new lines in a text file.
read each character of file and count accordingly. */
#include <stdio.h>
main()
{
  FILE *fp;
  char name[100];
  char ch;
  int count=0;
  int spaces=0;
  int lines=0;
  int tabs=0;
  clrscr();
  printf("\nEnter name of file including path: " );
  gets(name);
  fp = fopen(name,"r");
  if(NULL == fp)
  {
    printf("\nError: Cannot open %s. Check filename and path");
	return;
  }
  else
  {
	  while(!feof(fp))
	  {
		  fscanf(fp,"%c", &ch);
		  printf("%c",ch);
		  count++;
		  if(ch == ' ') spaces++;
		  if(ch == '\n') lines++;
		  if(ch == '\t') tabs++;
	  }
  }
  printf("\nTotal characters = %d. Lines=%d Spaces=%d Tabs=%d ",count,lines,spaces,tabs);
  getch();

  fclose(fp);
}