#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
void push(struct node** top)
{
 printf("enter the data : ");
 struct node* newnode= (struct node*)malloc(sizeof(struct node));
 scanf("%d",&newnode->data);
 newnode->next=*top;
 *top = newnode;
}
void pop(struct node**top)
{
 if(*top==0)
 {
 printf("underflow");
 }
 else
 {
 *top=(*top)->next;
 }
}
void display(struct node** top)
{
 struct node*temp=*top;
 while(temp!=0)
 {
 printf("%d ",temp->data);
 temp=temp->next;
 }
}
int main()
{
 int choice;
 struct node* top=0;
 do
 {
 printf("\nenter the choice :: \n 1: push \n 2: pop \n 3: display \n 4: exit \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: push(&top);
 break;
 case 2: pop(&top);
 break;
 case 3: display(&top);
 break;
 default : exit(1);
 }
 }
 while(1);
 return 0;
}
