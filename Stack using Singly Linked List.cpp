//Stack  using Linked Representation
//


#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *next;
}node;
node *top=NULL;
 void push(int val)
 {
 	node *temp=(node*)malloc(sizeof(node));
 	temp->data=val;
 	temp->next=NULL;
 	if(top==NULL)
 	{
 		top=temp;
	}else
	{
		temp->next=top;
		top=temp;
	}
	printf("Push Operation is Successfull..!!!");
 }
 void pop()
 {
 	if(top==NULL)
 	{
 		printf("Empty Stack..!!");
 		return;
	}
	node *temp=top;
	top=top->next;
	int data=temp->data;
	free(temp);
	printf("Pop operation is successfull..\n");
	printf("popped element is %d ",data);
 }
 int main()
 {
 	int ch;
 	printf("Stack using Linked List\n");
 	while(1)
 	{
 		printf("\n\n1. Push\n2. pop\n3. exit\n");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:printf("Enter an element\n");int val;
 			      scanf("%d",&val);
 			      push(val);
 			      break;
 		    case 2:pop();break;
 		    case 3:exit(1);
 		    default:printf("Invalid Input..!!!\n");
		}
	}
 }
