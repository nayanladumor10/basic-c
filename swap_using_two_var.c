#include<stdio.h>
main(){
	int a,b;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	printf("values before swapping\na:%d\nb:%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nvalues after swapping\na:%d\nb:%d",a,b);
}
