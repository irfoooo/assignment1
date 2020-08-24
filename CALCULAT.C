#include<stdio.h>
void main()
{
char operator;
float first,second;
printf("enter an operator(+,-,*,/):");
scanf("%c",&operator);
printf("enter two numbers:");
scanf("%f %f",&first,&second);
switch(operator)
{
case'+':
	printf("%f+%f=%f",first,second,first+second);
	break;
case'-':
	printf("%f-%f=%f",first,second,first-second);
	break;
case'*':
	printf("%f*%f=%f",first,second,first*second);
	break;
case'/':
	printf("%f/%f=%f",first,second,first/second);
	break;
default:
	printf("error");

	}
getch();
}
