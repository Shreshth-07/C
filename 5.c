#include<stdio.h>
#include<stdlib.h>
struct stack
{
 int size;
 int top;
 int *arr;
};
int prio(char x)
{
 if(x=='(')
 return 0;
 else if(x=='+' || x== '-' )
 return 1;
 else if(x=='*' || x== '/')
 return 2;
}
void push( struct stack *s,int data)
{
 s->top=s->top+1;
 s->arr[s->top]=data;
}
char pop( struct stack *s)
{
 if(s->top==-1)
 {
 return -1;
 }
 else
 {
 int x;
 x=s->arr[s->top];
 s->top=s->top-1;
 return(x);
 }
}
int main()
{
 struct stack *s=( struct stack *)malloc(sizeof( struct stack ));
 s->top=-1;
 s->size=100;
 s->arr=(int *)malloc(sizeof(int)*s->size);
 char exp[20];
 char *e;
 char x;
 printf("Enter the expression: \n");
 scanf("%s",exp);
 printf("\nThe infix expression is :\n %s",exp);
 printf("\nThe postfix expression is :\n");
 e=exp;
 while(*e !='\0')
 {
 if(isalnum(*e))
 printf("%c",*e);
 else if(*e=='(')
 push(s,*e);
 else if(*e==')')
 {
 while((x=pop(s))!='(')
 printf("%c",x);
 }
 else
 {
 while(prio(s->arr[s->top])>= prio(*e))
 {
 char p=pop(s);
 printf("%c",p);
 }
 push(s,*e);
 }
 e++;
 }
 while(s->top!=-1)
 {
 printf("%c",pop(s));
 }
}
