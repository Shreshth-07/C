#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
struct node* insertatright(struct node**headt, struct node*temp)
{
 printf("enter the element you want to enter :\n");
 struct node* newnode= (struct node*)malloc(sizeof(struct node));
 scanf("%d",&newnode->data);
 newnode->next=0;
 if(*headt==0)
 {
 *headt = temp = newnode;
 }
 else
 {
 temp->next = newnode;
 temp = temp->next;
 }
 return temp;
}
void alternatedelete(struct node**headt)
{
 struct node *temp;
 temp = *headt;
 while(temp->next!=0)
 {
 struct node *t =temp->next;
 temp->next=t->next;
 temp = temp->next;
 if(temp->next->next==0)
 {
 temp->next=0;
 }
 }
 printf("alternate elements are deleted.\n");
}
void display(struct node**headt)
{
 struct node*temp;
 temp = *headt;
 while(temp!=0)
 {
 printf("%d->",temp->data);
 temp=temp->next;
 }
}
int main()
{
 int choice;
 struct node* head=0, *temp=0;
 do
 {
 printf("\nenter the choice :: \n 1: insert at right \n 2: delete alternate element \n 3: display \n 4: exit \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:temp = insertatright(&head, temp);
 break;
 case 2: alternatedelete(&head);
 break;
 case 3: display(&head);
 break;
 default : exit(1);
 }
 }
 while(1);
 return 0;
}
