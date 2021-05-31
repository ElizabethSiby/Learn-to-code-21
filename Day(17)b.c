Write a C program to print inverted full pyramid of *

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j,n;
scanf("%d",&n);
if(n<1)
{printf("ERROR");}

for(i=1;i<=n;i++)
{

 for(j=2*n;j>=i*2;j=j-1)
{printf("* ");}printf("\n");
for(j=1;j<=2*i;j++)
    printf(" ");
}
return 0;
}
