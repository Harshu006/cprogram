/*Pattern-3 -> centre aligned numbers*/
/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
Continue from Pattern-2: Push each number by a space.
*/
main()
{
  int n,i,l,b;
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
      printf("%d ",n);
    }
    printf("\n");
  }
  getch();
}
