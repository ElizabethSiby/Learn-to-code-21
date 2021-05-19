Write a C Program to compute the multiplication table of 1 - 5 using do-while.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int choice,a=0,m;
do
{scanf("%d",&choice);
 printf("\n1.Table of 1");
 printf("\n2.Table of 2");
 printf("\n3.Table of 3");
 printf("\n4.Table of 4");
 printf("\n5.Table of 5");
 printf("\n6.Exit");
 switch(choice)
 {case 1:{printf("\n");
         for(int i=1;i<11;i++)
         {m=i*choice;
         printf("%d\t",m);
         }break;}
  case 2:{printf("\n");
         for(int i=1;i<11;i++)
         {m=i*choice;
         printf("%d\t",m);
         }break;}
 case 3:{printf("\n");
         for(int i=1;i<11;i++)
         {m=i*choice;
         printf("%d\t",m);
         }break;}
 case 4:{printf("\n");
         for(int i=1;i<11;i++)
         {m=i*choice;
         printf("%d\t",m);
         }break;}
 case 5:{printf("\n");
         for(int i=1;i<11;i++)
         {m=i*choice;
         printf("%d\t",m);
         }break;}
case 6:break;
default:{printf("\nEnter a valid option!");break;}

}a=a+1;}
while(a<2);
return 0;
}
