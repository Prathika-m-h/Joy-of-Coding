/*
Consider the strings Str1= AACD and Str2= ACDA, Str2 is rotation of Str1, so as ABCD and CDAB.
Considering Str3= ABCD and Str4= ACBD, Str4 is not rotated version of Str3. Given two strings
Str1 and Str2, write a program that determines whether Str2 is a rotation of Str1 
*/
#include<stdio.h>
#include<string.h>
char* rotate(char* str)
{
    int i;
    char temp=str[0];
    for(i=0;i<strlen(str)-1;i++)
       str[i]=str[i+1];
    str[i]=temp;
    str[++i]='\0';
    return str;

}

int main()
{
    char str1[100],str2[100];
    printf("Enter the two Strings\n");
    scanf("%s%s",str1,str2);
    
    
    for(int i=0;i<strlen(str1);i++)
    {
      if(strcmp(str2,rotate(str1))==0)
      {
          printf("str2 is rotated version of str1\n");
          return 0;
      }
    }
    printf("str2 is not rortated version of str1\n");
}
