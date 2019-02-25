/*Find largest of three numbers


name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
a,b,c        int           Input          input value
Explanation: 
Finds the largest amongst three numbers 

*/
/* Method -1 (multiple level nesting)
   this becomes complicated when more values are to be checked, 
   as the nesting becomes deeper and deeper.
*/
main()
{
  int num;
  
  clrscr();
  printf("\nEnter three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a > b)
  {
	  if(a>c)
	  {
		  printf("\n %d is largest ",a);
	  }
	  else
	  {
		  printf("\n %d is largest ",c);
	  }
  }
  else
  {
	  if(b>c)
	  {
		  printf("\n %d is largest ",b);
	  }
	  else
	  {
		  printf("\n %d is largest ",c);
	  }
  }
  getch();
}

/*MEthod -2: Single level nesting 
  This method does not get complicated as number of 
  values increases, as it is always at single level of if.
*/
/*
main()
{
  int num1,num2,num3,large;
  clrscr();
  printf("\nEnter the three numbers: ");
  scanf("%d%d%d",&num1,&num2,&num3);
  large = num1; 
  if(num2 > large)
	 large = num2;
  if(num3 >large)
	 large = num3;
  printf("\nLargest of %d, %d & %d is %d",num1,num2,num3,large);
  getch();
}
*/