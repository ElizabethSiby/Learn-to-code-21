Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char str[200];
int vow=0,cons=0,bkspaces=0;
gets(str);
for(int i=0;str[i]!='\0';i++)
{if(str[i]>=97 && str[i]<=122)
{if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      vow++;
 else
     cons++;}
else
   bkspaces++;}
printf("%d\n%d\n%d",vow,cons,bkspaces);

return 0;
}
