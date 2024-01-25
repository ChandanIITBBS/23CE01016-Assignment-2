#include<stdio.h>
int main (){
int cp,tp,tx,tpa,txa,t;
    printf("The base price of meal:- ");
    scanf("%d",&cp);
    printf("\nEnter tip percent:- ");
    scanf("%d",&tp);
    printf("\nEnter tax percent:- ");
    scanf("%d",&tx);
    tpa=(cp*tp)/100;
    txa=(cp*tx)/100;
    t=cp+tpa+txa;
    printf("The total cost of meal is %d",t);
    
    return 0;
    }