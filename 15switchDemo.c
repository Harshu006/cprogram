/*Program15: Switch case Demo 
The nature of switch statement that it provides an entry point jump based on the value in switch statement.
Two important concepts are essential to understand.

I: categorization of data set.
for all possible values of ch given by scanf(). We classify those in two categories:
unaccounted values: handled by default
accounted values  : handled by individual case labels.

II: navigation behaviour.
Since it is an entry point statement, it influences only the entry point of the jump to case label.
After executing statements in a specific case label, control simply flows down in a straight line, 
travelling into each of remaining case labels to the end of program.
eg. if ch is 2, the following statements will be executed

enters here 
==> case 2:
      printf("\nOption 1 selected")
   case 3:                                   <== comes here 
         printf("\nOption 1 selected")
   case 4:                                   <== comes here 
         printf("\nOption 1 selected")
~~~~~ output is 
   Option 2 selected
   Option 3 selected
   Option 4 selected

To have exclusive case executions (case 2: executes only when ch is 2)   
insert break statements at the end of each case block (uncomment break in code)
 */
main()
{
   int ch;
   printf("\n      Switch Case Demo. ");
   printf("\n1. Option-1 ");
   printf("\n2. Option-2 ");
   printf("\n3. Option-3 ");
   printf("\n4. Option-4 ");
   printf("\nEnter choice (1-4) : ");
   scanf("%d",&ch); /*based on value, code will be executed below*/
   
   switch(ch)
   {
   case 1:
      printf("\nOption 1 selected"); 
	  /*break;*/
   case 2:
      printf("\nOption 2 selected"); 
	  /*break;*/
   case 3:
         printf("\nOption 3 selected"); 
		 /*break;*/
   case 4:
         printf("\nOption 4 selected"); 
		 /*break;*/
  default:
      printf("\nChoose value between 1 to 4"); 
	  /*break;*/
   }
}
