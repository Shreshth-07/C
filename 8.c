#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
void enqueue(struct node** front, struct node**rear)
{
 printf("enter the data : ");
 struct node* newnode= (struct node*)malloc(sizeof(struct node));
 scanf("%d",&newnode->data);
 newnode->next=0;
 if((*front) == 0 && (*rear) == 0)
 {
 (*front) = (*rear) = newnode;
 }
 else
 {
 (*rear)->next = newnode;
 *rear = newnode;
 }
}
void dequeue(struct node** front, struct node**rear)
{
 if(*front==0)
 {
 printf("NO ELEMENT IN QUEUE ");
 }
 if ((*front)->next == *rear)
 {
 *front = *rear = 0;
 printf("data is deleted successfully");
 }
 else
 {
 *front = (*front)->next;
 }
}
void display(struct node** front, struct node**rear)
{
 struct node*temp = *front;
 while(temp!=*rear)
 {
 printf("%d ",temp->data);
 temp=temp->next;
 }
 printf("%d ",temp->data);
}
int main()
{
 int choice;
 struct node* front , *rear;
 front = rear = 0;
 do
 {
 printf("\nenter the choice :: \n 1: ENQUEUE \n 2: DEQUEUE \n 3: DISPLAY \n 4:EXIT \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: enqueue(&front , &rear);
 break;
 case 2: dequeue(&front , &rear);
 break;
 case 3: display(&front , &rear);
 break;
 default : exit(1);
 }
 }
 while(1);
 return 0;
}
