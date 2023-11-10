#include<stdio.h>

int main()
{

int bsal,dallow,allow,total;
printf(" Enter your basic salary:");
scanf("%d",&bsal);
dallow=40*bsal/100;
allow=20*bsal/100;
total=bsal+dallow+allow;
printf("\nYour total salary is:%d",total);
return 0;


}
