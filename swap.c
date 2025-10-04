#include<stdio.h>
int main()
{
    int a=22,b=56,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n a=%d", a);
    printf("\n b=%d", b);
    return 0;    
}




