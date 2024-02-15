#include<stdio.h>
main(){
	int a,b,c;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	printf("values before swapping\na:%d\nb:%d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nvalues after swapping\na:%d\nb:%d",a,b);
}
