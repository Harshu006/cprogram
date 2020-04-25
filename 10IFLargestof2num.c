/*Find largest of two numbers


name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
a,b        int           Input          input value
Explanation: 
Reads two numbers (a, b) and checks for three possible relationships between two numbers
a  >  b  (a is greater than b)
a  <  b  (a is less than b)
a ==  b  (a is equal to  b)

*/
main()
{
  int a,b; 
  
  clrscr();
  printf("\nEnter two numbers: ");
  scanf("%d%d",&a,&b);
  if(a > b)
  {
	  printf("\n %d is greater than %d",a,b);
  }
  else
  {
	  if(a==b)
	  {
		  printf("\nNumbers are same %d ",a);
	  }
	  else
	  {
		  printf("\n %d is greater than %d",b,a);
	  }
  }
  getch();
}
