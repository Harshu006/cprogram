/*Demo of 1-D arrays! calculate sum of 10 ten numbers and display all input numbers in result*/
main()
{
  int a[10], sum, i;
  clrscr();
  sum =0;
  printf("\nDemonstration of 1-D arrays");
  printf("\nEnter 10 numbers: ");
  for(i=0;i<10;i++)
  {
     printf("\nEnter number %d: ",i+1);
     scanf("%d", &a[i]);
  }
  for(i=0;i<10;i++)
  {
    sum = sum + a[i];
  }
  printf("\nSum of following numbers: " );
  for(i=0;i<10;i++)
  {
    printf(" %d  ",a[i]);
  }
  printf(" is : %d ", sum);
  getch();
}
