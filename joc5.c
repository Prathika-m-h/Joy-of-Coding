/*Given an image (a), Sanvi is not comfortable viewing it in her computer/tab. She wants a better 
viewing experience as shown in (b). Write a program that keeps Sanvi happy. 
(Hint. Image is represented as matrix; The input is a matrix and the output is a matrix as well.)*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the no of rows and elements in matrix\n");
    scanf("%d%d",&n,&m);
    int a[n][m]; int b[m][n];
    printf("Enter the elements of the matrix\n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x=m-1;int y=0;
    for(int j=0;j<m;j++)
    {
     for(int i=0;i<n;i++)
    {
        
        b[y][i]=a[i][x];
        
    }
    x--;y++;
    }
    printf("The new matrix view is\n");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
}

    
