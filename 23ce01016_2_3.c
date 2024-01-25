#include<stdio.h>
void main()
{
    int Days;
    printf("\n Enter number of Days:::");
    scanf("%d",&Days);
    int Years=Days/365;
    printf("Years : %d\n",Years);
    int Months=(Days-Years*365)/30;
    printf("Months : %d\n",Months);
    int Weeks=(Days-Years*365-Months*30)/7;
    printf("Weeks : %d\n",Weeks);
    Days=Days-Years*365-Months*30-Weeks*7;
    printf("Days : %d\n",Days);

}