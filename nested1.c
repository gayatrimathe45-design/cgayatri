#include<stdio.h>
int main()
{
    char ch;
    printf("enter anything");
    scanf("%c",&ch);scanf("%c",&ch);
    if((ch>=65 && ch<=90)||((ch>=97 && ch<=122)))
    {
        if(ch>=65 && ch<=90)
        printf("upper case");
    else
        printf("lower case");
    }
    
    else if(ch>=48 && ch<=57)
        printf("digit");
    else
        printf("special symbol");
    return 0;

}