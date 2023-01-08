#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void create();
void display();

void insert_beg();
void delete_ele();

struct Node{
    struct Node *llink;
    int data;
    struct Node *rlink;
};
typedef struct Node node;
 node *curr,*new1,*start,*temp;




int main(){
    int ch;
    int ele;
    while(1){
   
   printf("\n1.create\n 2.insert left side\n3.delete element\n4.display\n5.exit\nn");
   printf("\nEnter your choice:");
   scanf("%d",&ch);
   switch(ch){
       case 1:create();
       break;
       case 2:insert_beg();
       break;
       case 3:delete_ele();
       break;
       case 4:display();
       break;
       case 5:exit(0);
       break;
       default:printf("\nwrong choice\n");
       break;
   }
   
}
}

//inserting

void create(){
   
    int choice;
    start=(node *)malloc(sizeof(node));
    printf("\nEnter elment to insert:");
    scanf("%d",&start->data);
    start->llink=NULL;
    curr=start;
    while(1){
        printf("\nDo yo want to insert another item?\n\n(1.yes 2.no)");
        scanf("%d",&choice);
       if(choice==1){
           new1=(node *)malloc(sizeof(node));
           printf("\nenter element to insert:");
           scanf("%d",&new1->data);
           curr->rlink=new1;
           new1->llink=curr;
           curr=new1;
       }
       else{
           curr->rlink=NULL;
           return;
       }
       
    }
   
}



void insert_beg(){
    new1 =(node *)malloc(sizeof(node));
    printf("\nenter a new1 element:");
    scanf("%d",&new1->data);
    if(start==NULL){
        new1->llink=NULL;
        new1->rlink=NULL;
        start=new1;
        return;
    }
   
   
    else{
        new1->rlink=start;
        start->llink=new1;
        new1->llink=NULL;
        start=new1;
    }
   
}

void delete_ele(){
    int ele;
    if(start==NULL){
        printf("Linked list is empty\n");
        return;
    }
    printf("enter the element to  delete\n");
    scanf("%d",&ele);
   
   
   
    if(start->data==ele){
        temp=start;
        start=start->rlink;
        start->llink=NULL;
        free(temp);
        return;
    }
   
   
    temp=start;
    while(temp!=NULL && temp->data!=ele){
        temp=temp->rlink;
    }
   if(temp==NULL){
        printf("invalid item!!!");
       return;
   }
     if(temp->data==ele ){
        temp->llink->rlink=temp->rlink;
    }
   
    if(temp->rlink!=NULL)
    temp->rlink->llink=temp->llink;
        free(temp);

    return;
}

//display
void display(){
   
    if(start==NULL){
        printf("Empty Linked List!\n");
        return;
    }
    temp=start;
   
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->rlink;
    }
}
