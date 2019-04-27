/* (Preprocessor Directives): pragma directives 
This directive is a special purpose directive and is used to turn on or off some features. 
This type of directives are compiler-specific i.e., they vary from compiler to compiler. 
#pragma startup and #pragma exit: These directives helps us to specify the functions that 
are needed to run before program startup( before the control passes to main()) and just 
before program exit (just before the control returns from main()).
*/

int func1(); /*function prototype*/
int func2();/*function prototype*/

#pragma startup func1        /*function prototype was required because compiler should know the existence of func1() */

#pragma exit  func2          /*function prototype was required because compiler should know the existence of func2() */

main()
{
  printf("\nMain()");

}
func1()
{
 printf("\nfunc1()");
}
func2()
{
printf("\n ok bye bye ...");
}
