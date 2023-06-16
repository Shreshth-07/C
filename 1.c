#include <stdio.h>
#include <stdlib.h>
void check(int *array,int n)
{
int i,t=0,c=0;
for(i=0;i<n;i++)
{
t=0;
for(int j=0;j<n;j++)
{
if(array[i]==array[j])
{
t++;
}
}
if(t==1)
{
c++;
}
if(c==2)
{
printf("Second non repeating elements = %d\n",array[i]);
break;
}
}
}
int main()
{
int n;
printf("Enter the length of the array:");
scanf("%d/n",&n);
int array[n];
printf("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
scanf("%d/n",&array[i]);
}
check(array,n);
return 0;
}
