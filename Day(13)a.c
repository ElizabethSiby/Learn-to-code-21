Write a program in C to Find the Frequency of Characters.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m=0;
    char ch;
    char sentence[100];
    gets(sentence);
    scanf("%c",&ch);
    for(int i=0;sentence[i]!='\0';i++)
    {if(sentence[i]==ch)
        m++;}
    printf("%d",m);
    return 0;
}
