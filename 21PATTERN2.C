/*Pattern-2 -> right aligned numbers.  */
/*
    1  for pattern of 5: line=1 : 4 blanks and 1 one  then write newline
   22  for pattern of 5: line=2 : 3 blanks and 2 twos then write newline
  333  for pattern of 5: line=3 : 2 blanks and 3 threes then write newline
 4444  for pattern of 5: line=4 : 1 blank  and 4 fours then write newline
55555  for pattern of 5: line=5 : 0 blanks and 5 fives then write newline 

       for pattern of n: line=l : (n-l) blanks and l ls
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
      printf("%d",n);
    }
    printf("\n");
  }
  getch();
}
