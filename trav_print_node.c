#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *link;
 };
  void print_node(struct node*head);
 int main()
 {
 struct node *head=(struct node*)malloc(sizeof(struct node));
 head->data=45;
 head->link=NULL;
 
 struct node *ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=10;
 ptr->link=NULL;
 head->link=ptr;
 
 ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=20;
 ptr->link=NULL;
 head->link->link=ptr;
 
print_node(head);
 return 0;
 }
 void print_node(struct node *head)
 {
 if(head==NULL)
 printf("linked list is empty");
 else
 {
 struct node *ptr =NULL;
 ptr=head;
 printf("node data are:- ");
 while(ptr!=NULL)
 {
   printf("%d ",ptr->data);
 ptr=ptr->link;
 }

 }
 }
