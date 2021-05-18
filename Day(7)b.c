Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int choice;int a,c;float b;
            scanf("%d",&choice);
            scanf("%d",&a);
            scanf("%f",&b);
            printf("1.Addition");
            printf("\n2.Subtraction");
            printf("\n3.Multiplication");
            printf("\n4.Division");
            switch(choice)
            {case 1:{printf("\n%d",c=a+b);
                      break;}
                case 2:{printf("\n%d",c=a-b);
                      break;}
                case 3:{printf("\n%d",c=a*b);
                      break;}
                case 4:{float c;
                        if(b==0)
                          printf("\nCannot be determined");
                        else
                          printf("\n%.1f",c=a/b);
                      break;}}
                 
           return 0;
}
