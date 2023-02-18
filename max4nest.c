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
	
	
	if(a<b)
	{
		if(b<c)
		{
			if(c<d)
			{
			printf("D is maximum");	
			}
		
		else
		{
			printf("C is maximum");
		}
}
	
	else{
		if(b<d)
		{
			printf("D is maximum");
		}
		
		else
		{
			printf("B is maximum");
		}
	}
}

else
{
	if(a<c){
		if(c<d){
		   printf("D is maximum");
		}
		else{
			printf("C is maximum");
		}
	}
		else{
			if(a<d){
				 printf("D is maximum");
			}
			else{
			printf("A is maximum");
		}
		}
	}
	
	
}



	

