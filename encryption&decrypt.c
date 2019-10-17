#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main() 
{
 char str[20];
 printf("\n Enter a string: ");
 gets(str);
 int i=0,j;
 printf("\n Enter encryption key:");
 scanf("%d",&j);
 while(str[i]!='\0')
 {
  if(isalpha(str[i]+j))
  {
   str[i]=str[i]+j;
  }
  else
   str[i]=str[i]-(26-j);
  i++;
 }
 printf("\n \n The encrypted string is: ");
 puts(str);
 i=0;
 while(str[i]!='\0')
 {
  if(isalpha(str[i]-j))
  {
   str[i]=str[i]-j;
  }
  else
   str[i]=str[i]+(26-j);
  i++;
 }
 printf("\n\n The decrypted string is: ");
 puts(str);
 return 0;
}
