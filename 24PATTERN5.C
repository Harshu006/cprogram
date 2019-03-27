/*Pattern-5 -> centre aligned incremental numbers with padding.  %2d writes an integer in TWO DIGIT FORMAT*/
/*
    1
   2 3
  4 5 6
 7 8 9 10

Continue from Pattern-4: Pad each value in 2 digits.
*/
main()
{
  int n,i,l,b,val=1;

  clrscr();
  printf("\nHow many pattern lines to write ?  "); scanf("%d", &n);

  for(l=1;l<=n;l++)
  {
    for(b=1;b<=n-l;b++)
    {
      printf(" ");
    }
    for(i=1;i<=l;i++)
    {
      printf("%2d ",val++);
    }
    printf("\n");
  }
  getch();
}
