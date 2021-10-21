/*
Question: 

No twins pls !!!: Mr. Chitti, a robot is assigned a job of reporting to his boss Dr. Vaseegaran
about the existence of twins in a group. Chitti’s job is just to report whether the group is distinct 
or not. Even if one duplicate is present then the group is not unique. Help Mr. Chitti to report. 
Input: an array of integers 
output: Array distinct / Array not distinct
Example: Consider the following array. The array is not distinct as 10 is duplicated. 
Array: 2 6 10 14 18 10 3 7
*/
#include<stdio.h>
int main()
{
   int a[100]; int n;
   printf("Enter the length of the array\n");
   scanf("%d",&n);
   printf("enter the array elements\n");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
    int count=0;
   for(int j=0;j<n;j++)
   {
     for(int k=j+1;k<n;k++)
     {
        if(a[j]==a[k])
         {
           count++;
           break; 

      }}
if(count==1)
{
 printf("Array not distinct");
break;
}
}
if(count==0)
printf("Array is distinct");
}