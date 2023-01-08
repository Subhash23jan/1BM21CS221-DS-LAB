//Queue  using Linked Representation
//


#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *next;
}node;
node *front=NULL,*rear=NULL;
 void insert(int val)
 {
 	node *temp=(node*)malloc(sizeof(node));
 	temp->data=val;
 	temp->next=NULL;
 	if(rear==NULL)
 	{
 		front=temp;
 		rear=temp;
	}else
	{
		rear->next=temp;
		rear=temp;
	}
	printf("Insert Operation is Successfull..!!!");
 }
 void delete1()
 {
 	if(front==NULL)
 	{
 		printf("Empty Queue..!!");
 		return;
	}
	node *temp=front;
	front=front->next;
	int data=temp->data;
	free(temp);
	printf("delete operation is successfull..\n");
	printf("deleted element is %d ",data);
 }
 int main()
 {
 	int ch;
 	printf("Queue using Linked List\n");
 	while(1)
 	{
 		printf("\n\n1. Insert\n2. Delete\n3. exit\n");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:printf("Enter an element\n");int val;
 			      scanf("%d",&val);
 			      insert(val);
 			      break;
 		    case 2:delete1();break;
 		    case 3:exit(1);
 		    default:printf("Invalid Input..!!!\n");
		}
	}
 }
