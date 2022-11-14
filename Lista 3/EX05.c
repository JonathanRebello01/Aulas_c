#include<stdio.h>

int main(){
	int x,rest3,rest7;
	printf("Digite um n�mero");
	scanf("%d", &x);
	rest3 = x % 3;
	rest7 = x % 7;
	
	
	if(rest3 == 0){
		if(rest7==0){
			printf("o numero e divisivel por 3 e por 7");
		}	
		else{
		printf("o nu s� e div po 7");
	}
		
	}
	if (rest7 == 0){
		if(rest3!=0) {
			printf("o nu s� e div po 7");
		}
	} 
	
	else{
		printf("o numero e por nem um");
	}
	
	
	return 0;
}
