#include <stdio.h>

int main()
{
int temp,a,b;
printf("enter the value of a\n");
scanf("%d",&a);
printf("enter the value of b\n");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
}
