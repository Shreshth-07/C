#include<stdio.h>
#include<stdlib.h>
void reverse(int arr[],int n, int i)
{
 if(n<=i)
 {
 return;
 }
 int temp = arr[i];
 arr[i]=arr[n-1];
 arr[n-1]=temp;
 i++;
 n=n-1;
 reverse(arr,n,i);
}
void display(int arr[] , int n)
{
 int i=0;
 while(i!=n)
 {
 printf("%d ",arr[i]);
 i++;
 }
}
int main()
{
 int *arr;
 int n;
 int i=0;
 printf("enter the size of array\n");
 scanf("%d",&n);
 arr=(int*)malloc(sizeof(int)*n);
 printf("enter the elements of array\n");
 for(int i=0; i<n; i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("array is : ");
 display(arr,n);
 reverse(arr,n,i);
 printf("\nreversed array is : ");
 display(arr,n);
 return 0;
}
