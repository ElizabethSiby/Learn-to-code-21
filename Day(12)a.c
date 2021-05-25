Write a C program to check whether a number present in the 1D array or not.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int array[50];
int n,size,a=0,i;
scanf("%d",&size);
for(i=0;i<size;i++)
{scanf("\n%d",&array[i]);}
scanf("\n%d",&n);
for(i=0;i<size;i++)
{if(array[i]==n)
{a++;
printf("%d is present in this array",n);break;}}
if(a==0)
{printf("%d is not present in this array",n);}

 return 0;
}
