/*Solving quadratic equation
Quadratic Equations are of the form: Ax^2 + Bx + C = 0
Determinent (D) is calculated as B*B - 4*A*C
This describes the nature of roots.
When D>0: roots are real and unequal.
     D=0: roots are real and equal.
	 D<0: No real roots (complex roots)
	 
name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
a,b,c      float         Input          Constants A B and C (input)
d          float         Calculated     Determinent as described above.
r1,r2      float         Calculated     roots of equation (output)

Explanation: 
The program reads inputs A B C using scanf() and uses the above mentioned process
to calculate roots of equation.
getch() waits for a keypress enabling user to read the program output on screen.
A header file math.h is required to enable C language compiler to properly 
understand the data requirements of sqrt() used. 
*/

#include <math.h>
main()
{
  float a,b,c;
  float d;
  clrscr();
  printf("\nThis program finds roots of quadratic equation");
  printf("\nQEqn. are of form: A*x*x + B*x + C = 0");
  printf("\nEnter values of A B C ");
  scanf("%f%f%f", &a, &b, &c);
  if(a==0)
  {
	  printf("\nError: Not a quadratic equation. Value of A cannot be zero");
  }
  else
  {
	  d = b*b - 4*a*c;
	  if(d>0)
	  {
		  r1 = ((-1.0*b)+sqrt(d))/(2*a);
		  r2 = ((-1.0*b)-sqrt(d))/(2*a);
		  printf("\nRoots are %f %f",r1,r2);
	  }
	  else if(d == 0)
	  {
		  r1 = (-1.0*b)/(2*a);
		  r2 = r1;
		  printf("\nRoots are %f %f",r1,r2);
	  }
	  else
	  {
		  printf("\nNo real roots!");
	  }
  }
  getch();
}
