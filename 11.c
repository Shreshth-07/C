#include <stdio.h>
#include <stdlib.h>
struct stack
{
 int size;
 int top;
 int *arr;
};
void push(struct stack *s, int data)
{
 s->top = s->top + 1;
 s->arr[s->top] = data;
}
char pop(struct stack *s)
{
 if (s->top == -1)
 {
 return -1;
 }
 else
 {
 int x;
 x = s->arr[s->top];
 s->top = s->top - 1;
 return (x);
 }
}
int main()
{
 struct stack *s = (struct stack *)malloc(sizeof(struct stack));
 s->top = -1;
 s->size = 100;
 s->arr = (int *)malloc(sizeof(int) * s->size);
 char exp[20];
 char *e;
 int ans = 0;
 printf("Enter the expression : \n");
 scanf("%s", exp);
 printf("\nThe postfix expression is : \n %s", exp);
 e = exp;
 while (*e != '\0')
 {
 ans = 0;
 if (isdigit(*e))
 {
 push(s, *e - '0');
 }
 else
 {
 int a = pop(s);
 int b = pop(s);
 switch (*e)
 {
 case '+':
 ans = a + b;
 break;
 case '-':
 ans = b - a;
 break;
 case '*':
 ans = a * b;
 break;
 case '/':
 ans = b / a;
 break;
 }
 push(s, ans);
 }
 e++;
 }
 int temp = pop(s);
 printf("\nThe value is %d", temp);
}
