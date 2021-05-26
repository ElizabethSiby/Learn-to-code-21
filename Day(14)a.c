Write a C Program to read a 2D Array and then display it.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int m,n,i,j;
            int array[100][100];
            scanf("%d %d",&m,&n);
            for( i=0;i<m;i++)
            {for( j=0;j<n;j++)
            {scanf("\n%d",&array[i][j]);}}
            for(i=0;i<m;i++)
            {for(j=0;j<n;j++)
            {printf("%d ",array[i][j]);}printf("\n");}  
            return 0;
}
