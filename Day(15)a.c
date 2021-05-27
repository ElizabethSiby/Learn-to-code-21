Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int m,n,i,j,ele;
int a=0;
int array[100][100];
scanf("%d %d\n",&m,&n);
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d ",&array[i][j]);}}
scanf("%d",&ele);
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{if(array[i][j]==ele)
{printf("Element found at (%d,%d)\n",i,j);
a++;}}}
if(a==0)
    printf("Element not found");
            
 
 
return 0;
}
