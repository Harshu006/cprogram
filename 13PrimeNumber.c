/*Prime number test
A prime number is one which can be only divided by 1 and itself.
name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
num        int           Input          the input number to be checked.
i          int           loop counter

Explanation: 
In simplest form of calculations, we take a loop from 2 to one less than number and check if any value
divides the number.
*/

#include <math.h>
main()
{
  int num,i;
  clrscr();
  printf("\nThis program checks if number is prime or not");
  printf("\nEnter the number : ");
  scanf("%d", &num);
  for(i=2;i<num;i++)
  {
	  if(num % i == 0)
	  {
		  printf("\n%d divides %d, exiting loop",i,num);
		  break;
	  }
	  else
	  {
		  printf("\n%d does not divide %d, exiting loop",i,num);
	  }
  }
  /*here we arrive in two scenarios..
  A: when if condition is true: and break throws control out of loop, before loop could end by itself.
  B: the loop ended completely.
  the scenario A implies that number is not prime
  the scenario B implies that number is prime.
  We detect scenario A & B by checking value of i.
  we have written  -->   for(i=2;i<num;i++)
  start from 2 upto (number-1), updating by increasing 1, think of smallest value 
  by which i < num is false.
  eg. let num is 7: starting from 2 
  2<7 --> true
  3<7 --> true
  4<7 --> true
  5<7 --> true
  6<7 --> true 
  7<7 is FALSE (so 7 is smallest value. so this is num only)
  */
  if(i == num)
  {
	  printf("\n%d is prime!",num);
  }
  else
  {
	  printf("\n%d is NOT prime!",num);
  }
  getch();
}
