Write a C program to find the number of prime numbers in a array of integers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,i,c=0,m;
int arr[100];
scanf("%d\n",&n);
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{m=0;
for(int j=2;j<arr[i];j++)
{if(arr[i]%j==0)
{ m=1;}}
if(m==0)
    c++;}
printf("%d",c);
  
return 0;
}
