/*
1). if else
syntax:
if(condition)
{
	true statement;
}else{
	false statement
}
*/
#include<stdio.h>
main()
{
	int age;
	printf("Enter your age here :");
	scanf("%d",&age);
	if(age>18){
		printf("You can go inside");
	}else
	{
		printf("You can't go inside"); 
	}
}
