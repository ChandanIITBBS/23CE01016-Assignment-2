#include<stdio.h>
void main()
{
    int k;
    printf("\n Enter Number::");
    scanf("%d",&k);
    ((k & 1)==0) ? printf("\n Even Number.") : printf("\n Odd Number.");
}