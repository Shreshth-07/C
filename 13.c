#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
 struct node* prev;
};
struct node* insertatright(struct node**head, struct node**tail)
{
 printf("enter the element you want to enter \n");
 struct node* newnode= (struct node*)malloc(sizeof(struct node));
 scanf("%d",&newnode->data);
 newnode->next=0;
 newnode->prev=0;
 if(*head==0)
 {
 *head = *tail = newnode;
 }
 else{
 (*tail)->next = newnode;
 newnode->prev=(*tail);
 *tail = newnode;
 }
}
int palindrome(struct node**head, struct node**tail)
{
 int count=0;
 while((*tail)->prev!=0 || (*head)->next!=0)
 {
 if((*head)->data!=(*tail)->data)
 {
 count++;
 break;
 }
 (*head)=(*head)->next;
 (*tail)=(*tail)->prev;
 }
 if(count)
 {
 printf("\n list is not palindrome");
 }
 else{
 printf("\n list is palindrome");
 }
}
int main()
{
 int choice;
 struct node * head=0, *tail=0;
 do
 {
 printf("\nenter the choice :: \n 1: insert at right for 1st list \n 2: check palindrome \n 3: exit \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: insertatright(&head, &tail);
 break;
 case 2: palindrome(&head, &tail);
 break;
 default : exit(1);
 }
 }
 while(1);
 return 0;
}
