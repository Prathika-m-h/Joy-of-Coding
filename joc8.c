/*
Baby Sanvi’s mother is preparing her for monthly assessment. To assess Sanvi’s recognition
and counting ability, mother shows a English sentence say “a big black bear sat on a big black
rug” and ask her to identify each letter and to tell the most frequent alphabet. In this case it’s a
with count 6. Automate this process by writing a program in C.
Note: Assume that the sentence will have only lower-case letters and no special characters
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char a[1000];
  printf("Enter the English sentence\n");
  fgets(a,1000,stdin);
  int b[26]={0};
  for(int i=0;i<strlen(a);i++)
  {
     if(a[i]>=97 && a[i]<=122)
     {
        int index=a[i]-97;
        b[index]=b[index]+1;
     }
  }
int max=b[0]; int freqindex=0;
  for(int i=1;i<26;i++)
 {
    if(b[i]>max)
    {
      max=b[i];
      freqindex=i;
    }
 }
 printf("Most frequent alphabet is %c with count %d\n",(freqindex+97),max);
}