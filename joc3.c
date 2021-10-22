/*
Sanvi is a very naughty kid. She can recognize numbers from 0 to 9. Her mother has to submit
a report to her team leader in next one hour. To engage the naughty Sanvi, she gives her 8 
balloons which has numbered printed on it. Sanvi is asked to put the balloons in a box, in such 
a way that the box shouldn’t contain duplicate balloons with respect to numbers printed on it. 
Help baby Sanvi to finish the task soon and start her mischiefs. 
Test case: 
Input: 1 2 3 1 2 1 3 1 
Output: 1 2 3
*/
#include<stdio.h>
int main()
{
   int a[8];int m[10]={0};
   printf("Enter the numbers printed on the ballons\n");
for(int j=0;j<8;j++)
   scanf("%d",&a[j]);
   for(int i=0;i<8;i++)
  {
     int n=a[i];
     m[n]=m[n]+1;
  }
  for(int i=0;i<10;i++)
{
  if(m[i]>0)
  printf("%d ",i);
}
printf("\n");
}