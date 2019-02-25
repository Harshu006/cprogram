/*If Statement demo
Reads a number , and checks if number>0 or not. Prints message accordingly.

name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
num        int           Input          input value
Explanation: 


*/
main()
{
  int num;
  
  clrscr();
  printf("\nEnter any number: ");
  scanf("%d",&num);
  if(num>0)
  {
	  printf("\nCondition is TRUE: You entered a positive number");
  }
  else
  {
	  printf("\nCondition is FALSE: You did not enter a positive number");
  }
  getch();
}
