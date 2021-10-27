/*Consider the following image 
Doesn’t it represent stack of books? 
Each book has the credentials such as 
Book_Id (int)
Book_Name (char)
Book_Author (char)
Book_Price (float)
You are required to arrange the books in such a way that, only the book at the top can be 
removed, and new book can be added only on to the top of the existing book stack. Imagine 
these books are to be kept in a box. The maximum number of books the box can contain is 5. 
Write C routine to 
• insert book
• remove book
• display the existing book details
The program should also check the following constraints.
• if the box is full then, books can’t be added
• books can’t be removed if the box is empty
Note : Use Structures. Enhance the program with pointer to structure concept (Introduce -> 
operator)
*/
#include<stdio.h>
struct book
{
    int Book_id;
    char Book_name[100];
    char Book_author[50];
    float Book_Price;
};
typedef struct book b;
void insert(b*,int*);
void delete(b*,int*);
void display(b*,int);

int main()
{
    b stacks[5];int ch;int top=-1;
    for(;;){
    printf("1.Insert book\n");
    printf("2.Remove book\n");
    printf("3.Display the existing book details\n");
    printf("4.Exit\n");
    printf("Enter the choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert(stacks,&top);
        break;
        case 2:delete(stacks,&top);
        break;
        case 3:display(stacks,top);
        break;
        case 4:return 0;
    }
        
    }
    
}
void insert(b* st,int* top)
{
    if(*top==4)
    {
        printf("Box is full,books can't be addded\n");
        return;
    }
    (*top)++;
    printf("Enter the id,name,author,price of the book to be added\n");
    scanf("%d%s%s%f",&st[*top].Book_id,st[*top].Book_name,st[*top].Book_author,&st[*top].Book_Price);
    printf("\n");
}
void delete(b* st,int* top)
{
    if((*top)==-1)
    {
        printf("Books can't be removed since the box is empty\n");
        return;
    }
    printf("Book removed is %d  %s  %s  %f\n",st[*top].Book_id,st[*top].Book_name,st[*top].Book_author,st[*top].Book_Price);
    (*top)--;
}
void display(b* st,int top)
{
    if(top==-1)
    {
        printf("box is empty");
    }
    for(int i=top;i>=0;i--)
    printf("%d  %s  %s  %f\n",st[i].Book_id,st[i].Book_name,st[i].Book_author,st[i].Book_Price);
}
