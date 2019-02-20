/*This program calculates simple interest
Read the Principal Amount, Rate and Time interval.
Calculate SimpleInterest as Principal * Rate * Time
   rate is read as a fraction : 5 percent is input as 0.05 

name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
p          int           Input         Principal Amount.
t          int           Input         Time in years
r          float         Input         Rate of interest
si         float         Calculated    SimpleInterest
Explanation: 
The program reads three inputs using scanf() and uses the above mentioned formula 
to calculate simple interset. The result is displayed through printf(). 
getch() waits for a keypress enabling user to read the program output on screen.


*/

int main()
{
  int p,t;
  float r,si;
  clrscr();
  printf("\nEnter the Amount: ");
  scanf("%d",&p);
  printf("\nEnter the rate of interest(Write 0.05 for 5%% p.a.: ");
  scanf("%f",&r);
  printf("\nEnter the time in years: ");
  scanf("%d",&t);
  si = p * r * t;
  printf("\nS.I. on Rs. %d for %d years at rate %f is = Rs. %f",p,t,r,si);
  printf("\n");
  getch();
}
