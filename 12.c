#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
struct node* insertatright(struct node**headt, struct node*temp)
{
 printf("enter the element :\n");
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
void sortlist(struct node**head)
{
 struct node* temp1, *temp2;
 temp1=(*head);
 while(temp1!=0)
 {
 temp2=temp1->next;
 while(temp2!=0)
 {
 if((temp1->data)>(temp2->data))
 {
 int data = temp1->data;
 temp1->data= temp2->data;
 temp2->data= data;
 }
 temp2=temp2->next;
 }
 temp1= temp1->next;
 }
 printf("List sorted ");
}
void merge(struct node* *head1, struct node**head2, struct node**head)
{
 struct node*temp= *head1;
 (*head) = (*head1);
 while(temp->next!=0)
 {
 temp = temp->next;
 }
 temp->next=(*head2);
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
 struct node * head1=0, *temp1=0;
 struct node * head2=0, *temp2=0;
 struct node * head=0, *temp=0;
 do
 {
 printf("\nenter the choice :: \n 1: insert at right for 1st list \n 2: insert at right for 2nd listt \n 3: sort 1st list \n 4: sort 2nd list \n 5: merge \n 6: display \n 7:exit \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: temp1 = insertatright(&head1, temp1);
 break;
 case 2: temp2 = insertatright(&head2, temp2);
 break;
 case 3: sortlist(&head1);
 break;
 case 4: sortlist(&head2);
 break;
 case 5: merge(&head1 , &head2 , &head);
 break;
 case 6: display(&head);
 break;
 default : exit(1);
 }
 }
 while(1);
 return 0;
}
