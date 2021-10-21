/*
Question:
After seeing the efficiency of Chitti, Dr. Vaseegaran assigns another job to him. The 
new responsibility is to count the frequency of numbers present in a group of numbers. The 
answer should be tabulated. Consider the following example. 
2 6 10 14 18 10 3 7 11 15 19 3 7 10 14
The expected output for the given 
set if numbers is 
2’s : 1
6’s : 1
10’s : 3
14’s : 2
18’s : 1
and so on … 
*/
#include<stdio.h>

int main()
{
  int a[100],n; int m[100]={0};
  printf("Enter the no of array elements\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(int j=0;j<n;j++)
{
  int no=a[j];
  m[no]=m[no]+1;
}
for(int i=0;i<100;i++)
{
  if(m[i]>0)
    printf("%d's:%d\n",i,m[i]);

}
}