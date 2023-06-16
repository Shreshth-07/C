#include <stdio.h>
void check_non(int arr[], int n)
{
 int d = 0, c = 0, i = 0, j = 0;
 for (i = 0; i < n; i++)
 {
 c = 0;
 for (j = 0; j < n; j++)
 {
 if (arr[i] == arr[j] && i != j && arr[i] != NULL)
 {
 c = c + 1;
 arr[j] = NULL;
 }
 }
 if (c > 0)
 {
 d++;
 }
 if (d == 3)
 {
 printf("\nThe third repeating element is %d", arr[i]);
 break;
 }
 }
}
void display(int arr[], int n)
{
 printf("The array is \n");
 for (int i = 0; i < n; i++)
 {
 printf("%d ", arr[i]);
 }
}
void insert(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
 printf("Enter the %dth element ", i + 1);
 scanf("%d", &arr[i]);
 }
 display(arr, n);
}

int main()
{
 int n;
 printf("Enter the size of the array \n");
 scanf("%d", &n);
 int arr[n];
 insert(arr, n);
 check_non(arr, n);
}
