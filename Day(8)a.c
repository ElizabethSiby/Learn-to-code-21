Write a C Program to identify if a number is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int orino,revno=0,remainder,n;

scanf("%d",&n);
orino=n;
while(n!=0)
{remainder=n%10;
 revno=revno*10+remainder;
 n=n/10;}
if(revno==orino)
{printf("Yes");}
else
    printf("No");

return 0;
}
