/*This program interchages two numbers using a third variable
Take a backup of first number to temp, then replace first with second.
Restore the other value from temp.

name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
x          int           Input         Also in output 
y          int           Input         Also in output
temp       int           Intermediate  intermediate calculation value

Explanation: 
The program reads two inputs using scanf() and interchanges them. The result is displayed through printf(). 
getch() waits for a keypress enabling user to read the program output on screen.


*/

main()
{
  int x,y;
  int temp;
  clrscr();
  printf("\nEnter first number: ");
  scanf("%d",&x);
  printf("\nEnter second number: ");
  scanf("%d",&y);
  temp = x;
  x = y;
  y = temp;
  printf("\nInterchanged numbers are %d   %d ",x,y);
  getch();
}
