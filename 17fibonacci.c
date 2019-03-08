/*Fibonacci Series: every new term is sum of previous two terms. The first two terms are 0 and 1
  0 1 1 2 3 5 8 ....
  This program prints first 10 elements of fibonacci series.
Data Used:
Name   Type          Behaviour            Remarks
p      int           initialized          (previous) number 
c      int           initialized          (current) number
n      int           calculated           (new) number.
i      int           loop counter

new number is sum of previous two numbers
n = c + p 
then 
p = c  previous gets the value of current
c = n  current gets the value of new 
and then next number is calculated
  */

main()
{
  int p,c,n,i;
  clrscr();
  printf("\nThis program prints first 10 elements of fibonacci series ");
  p = 0;
  c = 1;
  printf("\n %d %d ", p,c);
  for(i=3;i<=10;i++)
  {
	  n = p + c;
	  printf(" %d ",n);
	  p = c;
	  c = n;
  }
  getch();
}