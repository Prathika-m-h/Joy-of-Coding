/*
Question:
Given an array of integers, and another integer K. Write a program to find indexes of two elements in an array which sum is equal to K.
This is called two sum problem.
Test case 1
input : [5, 4, 7, 3, 9, 2]
Sum=13
output : Indices are found at 1 and 4 (4 and 1)
Test case 2
input : [1, 2, 3, 4, 5]
Sum=9
output : Indices are found at 3 and 4 (4 and 3)
Test case 3
input : [1, 2, 3, 4, 5]
Sum = 10
output : No indices found
*/
#include<stdio.h>
int main()
{
  int k,n;int a[100];
  printf("Enter the integer k\n");
  scanf("%d",&k);
  printf("Enter the length of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);int count=0;
  for(int i=0;i<(n-1);i++)
  {
    for(int j=i;j<n;j++)
    {
       if((a[i]+a[j])==k)
       {
         printf("Indices are found at %d and %d",i,j);
         count++;
         break;
       }
    }
   if(count>0)
   break;
  }
  if(count==0)
  printf("No indices found");
}