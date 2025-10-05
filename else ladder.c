#include<stdio.h>
int main()
{
    float m1,m2,m3,total,avg;
    printf("enter marks of 3 subjects:");
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("\n Total:%f",total);
    printf("\n Avg:%f",avg);
 if(avg<=100 && avg>90)
    printf("\n Grade A");
else if(avg<90 && avg>80)
    printf("\n Grade B");
else if(avg<80 && avg>70)
    printf("\n Grade C");
else if(avg<60 && avg>50)
    printf("\n Grade F");
    return 0;

}