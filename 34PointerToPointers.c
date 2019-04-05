/* Extending the pointer concept - Pointer to a pointer  */

main()
{
	int i;
	int *j;
	int **k;
	j = &i;
	k = &j;
	**k = 78;
	clrscr();
	printf("\n int i; int *j; int **k");
	printf("\n j = &i; k = &j; **k=78; ");
	printf("\nint : i = %d *j = %d **k = %d ",i, *j, **k);
	
	
	printf("\nAddress of i = %u contents of i = %d\n", &i, i);
	printf("\nAddress of j = %u contents of j = %u\n", &j, j);
	printf("\nAddress of k = %u contents of i = %u\n", &k, k);
	getch();
}

/*
following output was generated:

 int i; int *j; int **k
 j = &i; k = &j; **k=78; 
int : i = 78 *j = 78 **k = 78 
Address of i = 65524 contents of i = 78

Address of j = 65522 contents of j = 65524

Address of k = 65520 contents of i = 65522

*/