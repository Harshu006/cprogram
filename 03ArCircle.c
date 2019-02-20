/*This program finds area of a circle 
Read the value of radius and calculate area with formula 22.0/7.0 *r *r 

name      -> name of variable
type      -> data type of variable
behaviour -> how value is filled
remarks   -> description 
Data Used:
Name       Type          Behaviour      Remarks
r          float          Input         radius of circle. It can come in output
area       float          Calculation   Area of circle. Primary output. 
Explanation: 
The program reads two radius via scanf() and uses the above mentioned formula 
to calculate area of circle. The result is displayed through printf(). 
getch() waits for a keypress enabling user to read the program output on screen.


*/

main()
{
   float r,area;
   printf("\n Enter the radius of the circle ");
   scanf("%f",&r);
   area = 22.0/7.0*r*r;
   printf("\nArea of circle with radius %f is %f ",r,area);
   getch();
}
