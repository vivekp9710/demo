#include<stdio.h>
int main(){
	
	int i,j,n=6,a=0;
	for(i=1;i<=2*n;i++){
		if(i<=5){
			
			for(j=1;j<=i;j++){
				
				printf("*");
		}
			}
			else{
				for(j=i;j<=2*n-1;j++){
					printf("*");
				}
			}
			printf("\n");
		}
	}

