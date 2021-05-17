WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float a,b,c;
float per;
scanf("%f",&a);
scanf("\t%f",&b);
scanf("\t%f",&c);
per=(a+b+c)/3;
printf("%.2f",per);
if(per>=90)
    printf("\nA");
else if(per>=80)
    printf("\nB");
else if(per>=70)
    printf("\nC");
else if(per>=60)
    printf("\nD");
else if(per>=40)
    printf("\nE");
else 
    printf("\nF");
    
    
return 0;
}
