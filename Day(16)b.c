Write a C program to find the minimum and maximum element of an array.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,m;
    int max,min;
    int array[100];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {scanf("%d ",&array[i]);
     max=array[0];
     min=array[0];}
    for(i=0;i<m;i++)
    {if(max<array[i])
        max=array[i];
     if(min>array[i])
        min=array[i];
    }
    printf("%d\n",min);
    printf("%d",max);
    return 0;
}
