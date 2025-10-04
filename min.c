#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    (a>b)?printf("mini is %d",b): printf("mini is %d",a);
return 0;
}