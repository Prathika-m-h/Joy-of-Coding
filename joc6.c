/*
Given an array (as shown) and a positive integer say 19, write a C program that prints the sub
array and the range of indices whose sum is equal to 19. In this case the sub array is [4,9,6] and
the indices range from 2 to 4. 
Test case 1
input
[5, 4, 7, 3, 9, 2]
Sum=23
output
the sub array is [4,7,3,9]
Indices range from 1 to 4 
Test case 2
input
[1, 7, 3, 8, 5, 9, 6, 2]
Sum=9
output
the sub array is [9]
Indices range from 5 to 5
Test case 3
input
[1, 7, 3, 8, 5, 9, 6, 2]
Sum = 48
output
Not possible to obtain the sum
*/
#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the no of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the sum value\n");
    scanf("%d",&k);
    for(int i=0;i<n-1;i++)
    {
        int sum=a[i];
        if(sum==k)
        {
            printf("Indices range from %d to %d",i,i);
            return 0;
        }
        for(int j=i+1;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==k)
            {
                printf("Indices range from %d to %d",i,j);
                return 0;
            }
            if(sum>k)
            break;
            
        }
       
    }
    printf("Not possible to obtain the sum\n");
}