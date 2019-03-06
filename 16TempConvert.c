/*Program16   Convert temperature in Fahrenheit to Celsius. 
 c = (5*(f-32))/9            
 
 */

main()
{
   float c,f;  /*input variables dealing with temperature*/
   int ch;     /*input for menu choice.*/
   printf("\n      Temperature conversion ");
   printf("\n1. Convert from Celcius to Fahrenheit ");
   printf("\n2. Convert from Fahrenheit to Celcius ");
   printf("\n0. Exit ");
   printf("\nEnter choice (0-2) : ");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
      printf("\nEnter the temperature in degree Celcius :");
      scanf("%f",&c);
      f = 32.0 +  9.0 * c / 5.0;
      printf("\n%f C = %f F",c,f);
      getch();
      break;
   case 2:
      printf("\nEnter the temperature in degree Fahrenheit :");
      scanf("%f",&f);
      c = (5.0*(f-32.0))/9.0;
      printf("\n%f F = %f C",f,c);
      getch();
      break;
	case 0:
	  printf("\nExiting program!");
	  break;
   default:
      printf("\nChoose value between 0 to 1");
   }
}
