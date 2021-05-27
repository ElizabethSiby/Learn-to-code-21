Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int m,n,p,q,i,j;
            int a[100][100];
            int b[100][100];
            int c[100][100];
            scanf("%d %d\n",&m,&n);
            for(i=0;i<m;i++)
            {for(j=0;j<n;j++)
             scanf("%d",&a[i][j]);}
            scanf("\n%d %d\n",&p,&q);
            for(i=0;i<p;i++)
            {for(j=0;j<q;j++)
             scanf("%d ",&b[i][j]);}
            if(n==p)
            {for(i=0;i<m;i++)
            {for(j=0;j<q;j++)
            { c[i][j]=0;
             for(int k=0;k<p;k++)
             {c[i][j]=c[i][j]+(a[i][k]*b[k][j]);}
             
            }}
            for(i=0;i<m;i++)
            {for(j=0;j<q;j++)
             
             printf("%d ",c[i][j]);
             printf("\n");
            }}
            else
                printf("ERROR");
             
            
            
            
            
            



    return 0;
}
