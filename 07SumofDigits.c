/*This program finds sum of digits of a number
Take advantage of integer division. 
store the actual number in a temporary location and use the temporary location
Number digit extraction:
Let number is 4537
4537/10 = 453 (int division)
4537 - (4537/10)*10 ==> 4537 - 4530 = 7 (extracted digit)
remove extracted digit from number by 4537/10 = 453 (int division)
453/10 = 45 (int division)
453 - (453/10)*10 ==> 453 - 450 = 3 (extracted digit)
remove extracted digit from number by 453/10 = 45 (int division)
Repeat process for all digits


name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
num        int           Input          Original number
temp       int           Calculated     backup copy of num
d1,d2,d3,d4 int          Calculated     Extracted digits of number, output
sum        int           Calculated     Output 
Explanation: 
The program reads number using scanf() and uses the above mentioned process
to extract digits. The result is displayed through printf(). 
getch() waits for a keypress enabling user to read the program output on screen.


*/

int main()
{
 int num,temp;
 int d1,d2,d3,d4,
 clrscr();
 printf("\nEnter the 4 digit positive number: ");
 scanf("%d",&num);
 
   /*we presume that number is 4 digit  */
   temp = num;
   d1 = temp - (temp/10)*10;
   temp = temp/10;
   d2 = temp - (temp/10)*10;
   temp = temp/10;
   d3 = temp - (temp/10)*10;
   d4 =temp/10;
   sum = d1 + d2 + d3 + d4;
   printf("\nDigits extracted are: %d %d %d %d",d1,d2,d3,d4);
   printf("\n Sum of digits of %d = %d ",num,sum);
   getch();
 
}
