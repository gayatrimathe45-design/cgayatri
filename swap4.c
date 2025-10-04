#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    a=a+b-(b=a);
    printf("\n b=%d",b);
    return 0;
}