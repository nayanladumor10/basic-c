#include<stdio.h>
main()
{
	int sal,hra,ta,da;
	
	printf("enter your salary:");
	scanf("%d",&sal);
	
	hra=(sal*10)/100;
	ta=(sal*5)/100;
	da=(sal*8)/100;
	
	int bsal=sal+hra+ta+da;
	
	printf("your base salary is:%d",bsal);
	
}
