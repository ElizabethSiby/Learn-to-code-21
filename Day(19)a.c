Write a C program to check whether a given number is amstrong or not.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void checkarms(int a);

int main() {int a;
scanf("%d",&a);
checkarms(a);

return 0;
}
void checkarms(int a)
{int d=0,r,num;
 num=a;
while(num!=0)
{r=num%10;
d=d+(r*r*r);
num/=10;}
if(d==a)
    printf("Amstrong");
else
    printf("Not Amstrong");
}
