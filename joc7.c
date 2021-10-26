/*
Consider a string “R N S Institute of Technology”. People are fond of
abbreviations. So the output expected for above string is RNSIT. Write a code to implement
the same. Make your code generic so that it can abbreviate any given string say “British
Broadcasting Corporation” to BBC.
Note: Do not use Built-in libraries
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char a[1000];
  printf("Enter the string to be abbreviated\n");
  fgets(a,1000,stdin);
  
  for(int i=0;i<strlen(a);i++)
  {
      char ch=a[i];
      if(ch>=65 && ch<=90)
      printf("%c",ch);
  }
  printf("\n");
}