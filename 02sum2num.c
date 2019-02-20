/*This program finds sum of two numbers
Sum of two numbers requires two numbers as input and we take result in third number
Data Used:
name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled

remarks   -> description 

Name       Type          Behaviour      Remarks
a          int            Input         container for first number. It can come in output
b          int            Input         container for first number. It can come in output
c          int            Calculation   container for third number. Primary output. 
Explanation: 
The program reads two values via scanf() and uses arithmatic operator + to add the values.
The resultant value is stored in container c. The result is displayed through printf(). 
getch() waits for user inputting via a keypress enabling user to read the program output on screen.


*/

main()
{
   int a,b,c;
   printf("\nEnter the first number");
   scanf("%d",&a);
   printf("\nEnter the second number ");
   scanf("%d",&b);
   c = a+b;
   printf("\n%d + %d = %d ",a,b,c);
   getch();
}
