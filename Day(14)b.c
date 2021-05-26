Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m,n,i,j;
    int array[100][100];
    scanf("%d %d",&m,&n);
    if(m==n)
    {for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {scanf("%d",&array[i][j]);}}
    for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {if((i+j)%2==0&&i==j)
         printf("%d ",array[i][j]);}}
     printf("\n");
     for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {if((i+j)==n-1)
          printf("%d ",array[i][j]);}}}
    else
        printf("ERROR");
    return 0;
}
