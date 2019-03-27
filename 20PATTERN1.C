/*Pattern-1: 
Patterns can be understood as :
how many Lines -->>  
   then what to write in each line, in what order.
*/
/*
1         <--line-1: write 1, one time then write newline
22        <--line-2: write 2, two times then write newline  
333       <--line-3: write 3, three times then write newline
4444      <--line-4: write 4, four times then write newline
55555     <--line-5: write 5, five times then write newline
             line l: write l, l times then write newline
*/
main()
{
  int n,i,l;
  clrscr();
  printf("\nHow many pattern lines to write ? "); scanf("%d", &n);

  for(l=1;l<=n;l++)
  {
    for(i=1;i<=l;i++) /*print line (l) times n*/
    {
      printf("%d",n);
    }
	/*after writing n, THEN WRITE NEWLINE*/
    printf("\n");
  }
  getch();
}
