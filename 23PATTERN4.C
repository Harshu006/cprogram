/*Pattern-4 -> centre aligned incremental numbers*/
/*
    1
   2 3
  4 5 6
 7 8 9 10

Continue from Pattern-2: Push each number by a space.
It will go out of shape after 10 (for lines>=5)
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
      printf("%d ",val++);
    }
    printf("\n");
  }
  getch();
}
