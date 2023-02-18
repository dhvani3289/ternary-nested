#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter a value : ");
	scanf("%d",&a);
	
	printf("Enter b value : ");
	scanf("%d",&b);
	
	printf("Enter c value : ");
	scanf("%d",&c);
	
	
	a>b? a>c?printf("A is maximum"):printf("C is maximum"): b>c? printf("B is maximum"):printf("C is maximum");
	
	
}
