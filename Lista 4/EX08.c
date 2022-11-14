#include<stdio.h>

int main(){
	int i, num, ant, prox;
	
	ant=1;
	prox=1;
	printf("%d \n", ant);
	printf("%d \n", prox);
	
	for (i=0; i<9; i++){
		
	num = ant + prox;
	
	printf("%d \n", num);
	
	ant=prox;
	
	prox=num;
	}
	
	return 0;
}
