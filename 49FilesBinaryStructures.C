/*Writing binary files: Structure demo */
#include <stdio.h>
struct tag
{
	char name[20];
	int id;
	float salary;
}

main()
{
	int i;
	struct tag emp;
	int bytes=0;
	FILE *fpw;
	FILE *fpr;
	fpw = fopen("flstrct.txt","wb"); /*open file for writing. erase contents if any*/
	if(fpw == NULL)
	{
		printf("\nError: Unable to open file for writing ");
		getch();
		return;
	}
	for(i=1;i<=3;i++)
	{
		fflush(stdin);
		printf("\nEnter details of %d employee: ",i);
		printf("\nEnter Name: "); gets(emp.name);
		printf("\nEnter Employee Id: "); scanf("%d", &emp.id);
		printf("\nEnter Employee Salary : "); scanf("%f",&emp.salary);
		printf("\nEmployee-%d: %s has Id=%d, Salary Rs.%f",i,emp.name,emp.id, emp.salary);
		bytes = fwrite(&emp,sizeof(emp),1,fpw);
		/*fwrite(addr of what to write, 
	*       size of data to write, 
	*       how many data elements to write, 
	*       where to write)
	* */
		printf("\nWritten %d record of employee-%d to file ",bytes,i);
	}
	fclose(fpw);
	/*Now read the file and its records*/

	fpr = fopen("flstrct.txt","rb"); /*open file for reading as binary */
	if(fpr == NULL)
	{
		printf("\nError: Unable to open file for reading ");
		getch();
		return;
	}
	rewind(fpr);
	while(!feof(fpr))
	{
		fread(&emp,sizeof(emp),1,fpr);
		printf("\nEmployee from file: Name=%s, Id=%d, Salary=Rs. %f",emp.name,emp.id,emp.salary);
		printf("\npress any key to read next record...");
	}
	fclose(fpr);
}
