#include<stdio.h>
main(){
	int a,b,c,d,e;
	
	printf("Enter a value : ");
	scanf("%d",&a);
	
	printf("Enter b value : ");
	scanf("%d",&b);
	
	printf("Enter c value : ");
	scanf("%d",&c);
	
	printf("Enter d value : ");
	scanf("%d",&d);
	
	printf("Enter e value : ");
	scanf("%d",&e);
	
	
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("D is minimum");
				}
				else{
					printf("E is minimum");
				}
			}
		
			else{ //c<d
				if (d<e){
						printf("D is minimum");
				}
				else{
						printf("E is minimum");
				}
			
			}
		
}
		else{ //b<c
			if(c<d){
				if(c<e){
					printf("C is minimum");
				}
				else
			{
				printf("E is minimum");
			}
		}
		
		else{
				if(d<e){
				printf("D is minimum");
			}
			else{
			printf("E is minimum");
			}
		} 
		
		}
}
	

   else{  //a<b
	if(b<c){
		if(b<d){
			if(b<e){
				printf("B is minimum");
			}
			else{
				printf("E is minimum");
			}
		   
		}
		
		else{ // b<d
			if(d<e){
				printf("D is minimum");
			}
			else{
				printf("E is minimum");
			}
			
			
		}
	}
	
	else{ //b<c
	if(c<d){
		if(c<e){
			printf("C is minimum");
		}
		else{
			printf("E is minimum");
		}
	}
	
	else{ //c<d
	if(d<e){
		printf("D is maximum");
	}
	else{
          printf("E is maximum");		
	}
	
	}
	}
		
}
}

