Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct classmarks{int rollno;
            char name[100];
                 float marks;}student[10];


int main() {int i;
for(i=0;i<4;i++)
{scanf("%d",&student[i].rollno);
scanf("%s",&student[i].name);
scanf("%f",&student[i].marks);
}
for(i=0;i<4;i++)
{printf("DETAILS OF ROLLNO %d",student[i].rollno);
 printf("\nNAME: ");
 puts(student[i].name);
 printf("MARKS: %.2f\n",student[i].marks);
}
   
    return 0;
}
