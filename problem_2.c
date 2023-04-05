#include<stdio.h>
int main()
{
    int a,b;
printf("Enter two integers : ");
scanf("%d %d", &a,&b);
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    float div = a*1.00/b;
printf("Summation = %d\n",sum);
printf("Subtraction = %d\n",sub);
printf("Multiplication = %d\n",mul);
printf("Division = %.2f\n",div);
}