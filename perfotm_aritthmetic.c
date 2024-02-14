#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d\n\n",&b);
	
	printf("addition of %d and %d is %d\n",a,b,a+b);
	printf("substraction of %d and %d is %d\n",a,b,a-b);
	printf("multiplication of %d and %d is %d\n",a,b,a*b);
	printf("division of %d and %d is %d\n",a,b,a/b);
	printf("modulo of %d and %d is %d\n",a,b,a%b);
}
