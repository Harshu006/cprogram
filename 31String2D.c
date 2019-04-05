/*Strings as 2 D Character Arrays 
5 names each with 20 character spaces */
main()
{
	char name[5][20];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
	  printf("\nEnter name: ");
	  scanf("%s",name[i]);
	}
	for(i=0;i<5;i++)
	{
	  printf("\nName: %s",name[i]);

	}
}