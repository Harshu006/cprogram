/*Program to demo structures. Displays declaring a structure. 
Accessing members with dot operator and by pointers */

struct tag {
  char name[20];
  int id;
  float salary;
};
main()
{
  struct tag emp;
  struct tag *ptr;
  ptr = &emp;
  clrscr();
  printf("\nEmployee information ");
  printf("\nEnter employee name : "); gets(emp.name);
  printf("\nEnter Id: "); scanf("%d", &emp.id);
  printf("\nEnter Salary: "); scanf("%f", &emp.salary);
  ptr->id = 10999;
  ptr->salary += 100000;
  printf("\nThe employee %s has Id = %d and Salary is Rs. %f",
	     emp.name, emp.id, emp.salary);
  getch();
}