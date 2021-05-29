Write a C Program to arrange the elements in ascending order.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int i,m,t;
            int array[100];
            scanf("%d\n",&m);
            for(int j=0;j<m;j++)
            {for(i=0;i<m;i++)
                scanf("%d ",&array[i]);
            for(i=0;i<m;i++)
            {if(array[i]>=array[i+1])
            {t=array[i+1];
              array[i+1]=array[i];
            array[i]=t;}}}
            for(i=0;i<m;i++)
            {printf("%d ",array[i]);}
             return 0;
}
