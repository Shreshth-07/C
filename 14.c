#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*next;
};
void insert(struct node**head, struct node**temp)
{
 struct node*newnode= (struct node*)malloc(sizeof(struct node));
 printf("\nenter the data : ");
 scanf("%d",&newnode->data);
 newnode->next=*head;
 if(*head==0)
 {
 *head = *temp = newnode;
 (*head)->next=*head;
 }
 else
 {
 (*temp)->next=newnode;
 *temp=newnode;
 }
}
void display(struct node**head)
{
 struct node*temp=*head;
 while(temp->next!=*head)
 {
 printf("%d->",temp->data);
 temp=temp->next;
 }
 printf("%d",temp->data);
}
int main()
{
 int choice;
 struct node*head,*temp;
 head =0;
 temp =0;
 do{
 printf("\nEnter the choice :: \n 1: insert \n 2: display \n 3:exit \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: insert(&head , &temp);
 break;
 case 2: display(&head);
 break;
 default: exit(1);
 }
 }
 while(1);
 return 0;
}
