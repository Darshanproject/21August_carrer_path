/*
Syntax:
(Condtion)?exp1:exp2;
we usr printf for printing any statments in our consle
we use scanf for getting dynamic values or getting values from user 
*/
#include<stdio.h>
void main()
{
	int num,num1;
	printf("Enter your num values here :");
	scanf("%d",&num);//& is used for providing address of your variable 
	printf("Enter your num1 values here :");
	scanf("%d",&num1);
	(num>num1)?printf("Num is greatter then num1 "):printf("Num1 is greatter the  num");
}


