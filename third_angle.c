#include<stdio.h>
main(){
	int fa,sa,ta;
	
	printf("enter the value of first angle:");
	scanf("%d",&fa);
	printf("enter the value of second angle:");
	scanf("%d",&sa);
	
	ta=180-(fa+sa);
	
	printf("your third angle is:%d",ta);
}
