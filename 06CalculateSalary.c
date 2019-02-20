/*This program calculates the salary.
/* The basic salary for an employee is read from keyboard. Other allowances are calculated as:
Dearness Allowance   :  40% of basic salary
House Rent Allowance :  20% of basic salary */


name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
basic      float         Input         Basic Salary amount
da         float         Input         Dearness Allowance  
hra        float         Input         House Rent Allowance
gross      float         Output        Gross Salary

*/

int main()
{
 float basic,da,hra,gross;
 clrscr();
 printf("\nEnter the basic salary:Rs. ");
 scanf("%f",&basic);
 da = 40.0/100.0 * basic; 
 hra = 20.0/100.0 * basic;
 gross = basic + da + hra;
 printf("\nSalary Details");
 printf("\nBasic Salary : Rs. %f",basic);
 printf("\nD.A.         : Rs. %f \nH.R.A.       : Rs. %f ",da,hra);
 printf("\nGross Salary : Rs. %f",gross);
 getch();
}
