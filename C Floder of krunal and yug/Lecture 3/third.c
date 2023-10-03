#include<stdio.h>
main(){
	int num,num1,ans;
	printf("Enter your values here :");
	scanf("%d%d",&num,&num1);
	ans=num+num1;
	num+=num1;//short hand operator
	printf("This is your values after sum %d",num);
}
