/*Write numeric data in text form*/
#include <stdio.h>
main()
{
  FILE *fp=NULL;
  int i,j;
  fp=fopen("vktables.txt","a+");
  if(NULL == fp)
  {
    printf("\nError: unable to open file vktables.txt ");
    return;
  }
  else
  {
     fprintf(fp,"\n********** MULTIPLICATION TABLES**********");
     for(i=1;i<=50;i++)
     {
	fprintf(fp,"\n----- TABLE OF %2d -----",i);
	for(j=1;j<=10;j++)
	{
		fprintf(fp,"\n%2d X %2d = %2d",i,j,i*j);
	}
	printf("\nWritten table of %2d ",i);
     }
  }
  fclose(fp);

}

/*Output:*/
********** MULTIPLICATION TABLES**********
----- TABLE OF 1 ----
 1 x 1 = 1
 1 x 2 = 2
 1 x 3 = 3
 1 x 4 = 4 
 1 x 5 = 5
 1 x 6 = 6 
 1 x 7 = 7
 1 x 8 = 8
 1 x 9 = 9
 1 x 10= 10
 
 ... upto table of 50
 