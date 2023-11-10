
#include <stdio.h>

int main()
{
    int a;
    printf("ENter the value of a\n");
    scanf("%d",&a);
    switch(a)
    {
       case 1:
       printf("\nYou are a duffer");
       break;
       case 2:
       printf("\nyou are a good guy");
       break;
       case 3:
       printf("\nyou are awesome");
       break;
       default:
       printf("\n you are idiot");
       break;
    }

return 0;





}