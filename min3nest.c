#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter a value : ");
	scanf("%d",&a);
	
	printf("Enter b value : ");
	scanf("%d",&b);
	
	printf("Enter c value : ");
	scanf("%d",&c);
	
	if(a>b){
		if(b>c){
			printf("C is minimum");
		}
		else{
			printf("B is minimum");
		}
	}
	
	else{
		if(a>c){
			printf("C is minimum");
		}
		
		else{
			printf("A is minimum");
		}
	}
}
	
	

