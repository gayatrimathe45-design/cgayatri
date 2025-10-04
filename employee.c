#include<stdio.h>
int main()
{
float salary;

printf("Enter a Employee salary :");
scanf("%f",&salary);

if(salary >= 100000)
  printf("Tax is: 20%%");

else if(salary >= 80000)
  printf("Tax is: 18%%");

else if(salary >= 50000)
  printf("Tax is: 15%%");

else if(salary >= 30000)
  printf("Tax is: 10%%");
else 
  printf("Tax is: 5%%");
return 0;
}
