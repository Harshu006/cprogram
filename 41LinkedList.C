/*Program to demo the working of linked lists*/
/*linked list has minimum two parts- data node and a link node
* declaring it here makes it visible to all portions of program
* and it becomes global
+--------+     +----+---+     +----+---+     +----+---+     +----+---+
| mylist |---->|data|ptr|---->|data|ptr|---->|data|ptr|---->|data|ptr|---->X(NULL)
+--------+     +----+---+     +----+---+     +----+---+     +----+---+
   ^                          ^  
   |                          |
start is always             nodes are always sent as pointer and received as *list 
sent as ptr to ptr
received as **list: to work with first node, we need to change contents of mylist           
*/
#include "stdio.h"
#include "conio.h"
struct node
{
	int data;
	struct node* ptr;
}

main()
{
	struct node *mylist=NULL;
	struct node *temp = NULL;
	int i;
	int data,pos, c,totalele;
	printf("\nPrefilling 5 elements in list");
	for(i=1;i<=5;i++)
	{
		printf("\n %d at begin",i);
		addatbegin(&mylist,i*11);
		display(mylist);
	}
	while(1) { /*create a menu system for actions*/
        c=1;fflush(stdin);
		display(mylist);
		getch();
		printf("\n******Linked List Demo******");
		printf("\n1. Display List ");
		printf("\n2. Add at begining ");
		printf("\n3. Add at position ");
		printf("\n4. Add at end ");
		printf("\n5. Count Elements of list ");
		printf("\n6. Delete element at position ");
		printf("\n0. EXIT ");
		printf("\nEnter choice (0-6): "); scanf("%d",&c);
		switch(c){
		case 0: 
			/*it is a good practice to release all memory before exiting*/
			totalele = count(mylist);
			/*repeatedly delete first element of list*/
			for(i=1;i<=totalele;i++)
			{
				deletefirstnode(&mylist);
			}
            printf("\nList is empty now. Exiting");
            getch();
			return;
		case 1: 
			display(mylist);
			break;
		case 2:
			printf("\nEnter number to insert ");scanf("%d",&data);      
			addatbegin(&mylist,data);
			break;
		case 3:
			printf("\nEnter number to insert ");scanf("%d",&data);
			printf("\nEnter position (1-%d)",count(mylist)); scanf("%d",&pos);
			addatindex(pos,mylist,data);
			break;
		case 4:
			printf("\nEnter number to insert ");scanf("%d",&data);
			addatend(mylist,data);
			break;
		case 5:
			printf("\nTotal elements in List are %d", count(mylist));
			break;
		case 6:
			totalele = count(mylist);
			printf("\nDelete at position (1-%d): ",totalele); scanf("%d",&pos);
			if(pos>totalele)
			{
				printf("\nThe specified position(%d) exceeds the total elements(%d)",pos,totalele);
			}
			else
			{
				if(pos == 1 )
				{
					deletefirstnode(&mylist);		    
				}
				else
				{
					printf("\nDeleting non-first element...");
					deletenode(mylist,pos);
				}
			}
			break;
		}
	}
}
/*deletefirstnode(): receives a address of start of list temp points to first 
element of list list points to 2nd element of list (ptr containing next node)
temp is deleted by releasing its memory.
*/
deletefirstnode(struct node **list)
{
	struct node *temp;
	temp = *list;
	*list = temp->ptr;
	printf("\nDeleting first element %d(@%u)",temp->data,temp);
	free(temp);
}

/*deletenode(): receives the address of 1st address of list move n places as 
required, by making curr as temp and making temp to look to next node (temp->ptr).
you now track 2 nodes next node becomes temp->ptr (ahead of temp) current node 
now points to this next node. temp points to node, which is released from memory
*/
deletenode(struct node *list, int n)
{
	struct node *temp;
	struct node *next;
	struct node *curr;
	int i;
	temp = list;
	curr = temp;
	for(i=1;i<n;i++)
	{
		if(temp ==NULL)
		{
			printf("\nError: List Ends at index %d ",i);
			getch();
			return;
		}
		curr = temp;
		temp = temp->ptr;
	}
	next = temp->ptr;
	curr->ptr = next;
	printf("\nDeleted Node at index %d(@%u) having value %d",i,temp,temp->data);
	getch();
	free(temp);
}

/*addatend(): receives address of 1st node, repeatedly move forward till 
temp->ptr is NULL (this is last node, having no further link)
create a newnode and make its pointer as NULL (there is no further node)
connect this newnode to temp;
*/


int addatend(struct node *list, int e)
{
	struct node *temp, *newnode;
	temp = list;
	while(temp->ptr !=NULL)
	{
		temp = temp->ptr;
	}
	newnode = (struct node*) malloc(sizeof(struct node));
	if(newnode !=NULL)
	{
		temp->ptr = newnode;
		newnode->data = e;
		newnode->ptr = NULL;
	}
}

/*addatbegin(): receives a address of start of list. allocate a newnode and 
assign data to it. point the ptr of newnode to first element of list point 
start of list to newnode.
 */
addatbegin(struct node **list, int e)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		newnode->data = e;
		newnode->ptr = *list;
		*list = newnode;
	}
}
/*addatindex(): insert an element at given index. receives address of 1st
element of list. move forward n steps in list (temp = temp->ptr)
create a newnode. make its pointer to the node connected to temp ptr.
connect this newnode to temp node (temp->ptr = newnode)
*/
addatindex(int n, struct node *list, int e)
{
	int i;
	struct node *newnode;
	struct node *temp;
	temp = list;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		newnode->data = e;
		for(i=1;i<n-1;i++)
		{
			temp = temp->ptr;
			if(temp == NULL)
			{
				printf("\nError: list ended after %d elements ",i);
				getch();
				return;
			}
		}
		newnode->ptr = temp->ptr;
		temp->ptr = newnode;
		return 0;
	}
	return -1;
}

/*count(): receives the address of first node and then 
counts nodes in linked list. increment the counter till linkptr is NULL
*/
int count(struct node *list)
{
	int c,i;
	c=0;
	while(list != NULL)
	{
		c++;
		list = list->ptr; /*move forward to next element */
	}
	return c;
}
/*display(): receives address of 1st element of list and displays all nodes
by walking through the list (stop at NULL )*/
display(struct node *list)
{
	printf("\nSTART-> ");
    textcolor(RED);
	while(list != NULL)
	{
        cprintf("%d",list->data);
		printf("(@%u) -> ",list);
		list=list->ptr;
	}
	cprintf(" X");
}
/* output of program*/
Prefilling 5 elements in list
START-> 55(@3084) -> 44(@3076) -> 33(@3068) -> 22(@3060) -> 11(@3052) -> X
******Linked List Demo******
1. Display List 
2. Add at begining 
3. Add at position 
4. Add at end 
5. Count Elements of list 
6. Delete element at position 
0. EXIT 
Enter choice (0-6): 
Deleting first element 55(@3084)
Deleting first element 44(@3076)
Deleting first element 33(@3068)
Deleting first element 22(@3060)
Deleting first element 11(@3052)
List is empty now. Exiting
