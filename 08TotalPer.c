/*Calculate Total and percentage of marks of a student*/
/*assuming max. marks are 100 and there are five subjects 

name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
s1,s2,s3,s4,s5  int      Input          input subject marks
total           int      Calculated     total marksOutput 
per             float    Calculated     percentage calculated
Explanation: 


*/
main()
{
  int s1,s2,s3,s4,s5;
  int total;
  float per; 
  clrscr();
  printf("\nEnter the marks of five subjects: ");
  scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
  total = s1+s2+s3+s4+s5;
  per = total / 500.0 * 100;
  printf("\nMarks obtained %d %d %d %d %d ",s1,s2,s3,s4,s5);
  printf("\nTotal = %d\nPercentage = %f",total,per);
  getch();
}
