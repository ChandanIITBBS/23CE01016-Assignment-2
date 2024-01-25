#include<stdio.h>
void main()
{
    int N;
    printf("\n Enter a Number:::");
    scanf("%d",&N);
    (N%2!=0 && (N>100 && N<200)) ? printf("\n The condition is True") : printf(" \n Condition is False");
}