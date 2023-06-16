#include<stdio.h>
#include<stdlib.h>
int push(int stack[], int top, int n)
{
 int data;
 printf("enter the data:");
 scanf("%d",&data);
 if(top==n-1)
 {
 printf("overflow");
 }
 else
 {
 top++;
 stack[top]=data;
 }
 return top;
}
int pop (int stack[], int top)
{
 if(top==-1)
{
 printf("underflow");
}
else
{
 printf("poped elements is %d",stack[top]);
 top--;
}
return top;
}
void display(int stack[], int top, int n )
{
 if(top == -1)
 {
 printf("underflow");
 }
 else
 {
 for(int i = top; i>=0; i--)
 {
 printf("%d\n",stack[i]);
 }
 }
}
int main()
{
 int n;
 printf("enter the size of stack:");
 scanf("%d",&n);
 int stack[n];
 int top=-1;
 int choice;
 do
 {
 printf("\nenter the choice :: \n 1: push \n 2: pop \n 3: display \n 4: Exit \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: top = push(stack,top,n);
 break;
 case 2: top = pop(stack,top);
 break;
 case 3: display(stack,top,n);
 break;
 default : exit(1);
 }
 }
 while (1);
 return 0;
}
