#include<stdio.h>
main(){
	int a,b,c,d;
	
	printf("Enter a value : ");
	scanf("%d",&a);
	
	printf("Enter b value : ");
	scanf("%d",&b);
	
	printf("Enter c value : ");
	scanf("%d",&c);
	
	printf("Enter d value : ");
	scanf("%d",&d);
	
	
	a>b? a>c? a>d? printf("A is maximum"):printf("D is maximum"): c>d? printf("C is maximum"):printf("D is maximum"):b>c? b>d? printf("B is maximum"):printf("D is maximum"):c>d? printf("C is maximum"):printf("D is maximum") ;
	
	
}
