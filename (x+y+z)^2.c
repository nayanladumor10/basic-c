#include<stdio.h>
main(){
	int x,y,z,sum;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	printf("enter the value of y:");
	scanf("%d",&z);
	
	sum=(x+y+z)*(x+y+z);
	
	printf("(x+y+z)^2=%d",sum);
}
