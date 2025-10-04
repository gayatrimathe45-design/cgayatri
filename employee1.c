#include<stdio.h>
int main()
{
    float BasicSalary,da,hra,tax,totalsalary;
    char name[100]; //character array(string)
    int id;

    printf("enter a employee details:");

    printf("\nID:");
    scanf("%d",&id);
    printf("Name:");
    scanf("%s",name);
    printf("Basic Salary:");
    scanf("%f",&BasicSalary);
    printf("da(%%):");
    scanf("%f",&da);
    printf("HRa (%%):");
    scanf("%f",&hra);

    if(BasicSalary>=100000)
       tax=20;
    else if(BasicSalary>=80000)
       tax=15;
    else if(BasicSalary>=50000)
        tax=10;
    else if(BasicSalary>=30000)
        tax=5;
    else tax=0;

    totalsalary=BasicSalary+((BasicSalary*(da+hra-tax))/100);

    printf("\n-------------salary slip----------------------------");
    printf("\nID :%d",id);
    printf("\nName :%s",name);
    printf("\nbasic salary :%.2f",BasicSalary);
    printf("\nDA(%%):%.2f",da);
    printf("\nHRA(%%):%.2f",hra);
    printf("\nTAX(%%):%.2f",tax);
    printf("\nTotal Salary :%.2f",totalsalary);
    return 0;




}


write a program accept student details like roll no,name, &marks of 3 subject,
calculate totalmarks & avg,find grade,display rsult/mark list in appropriate format??