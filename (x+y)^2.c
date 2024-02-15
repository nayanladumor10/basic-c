#include<stdio.h>
main(){
	int x,y,sum;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	
	sum=(x+y)*(x+y);
	
	printf("(x+y)^2=%d",sum);
}
