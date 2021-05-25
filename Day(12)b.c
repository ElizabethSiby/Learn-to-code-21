Write a C program to find the frequency of odd and even numbers in the 1D array.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int array[50];
int size,i,f1=0,f2=0;
scanf("%d",&size);
for(i=0;i<size;i++)
{scanf("\n%d",&array[i]);}
for(i=0;i<size;i++)
{if(array[i]%2==0)
{f1++;}
else
{f2++;}}
printf("%d\n%d",f1,f2);






return 0;
}
