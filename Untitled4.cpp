#include<stdio.h>
main()
{ 
int a,b;
printf("please enter any two different numbers:");
scanf("%d", &a);
scanf("%d", &b);
printf("numbers before swapping: %d , %d\n",a,b);
printf("numbers after swapping: %d , %d",b,a);
return 0;
}
