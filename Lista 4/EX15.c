#include<stdio.h>

int main(){
	
	int a,b;
	printf("Digite dois numero inteiro: ");
	scanf("%d %d", &a, &b);

	if (a>b){
		b = b + 1;
		for (b; ba; b++){
			printf("%d \n", b);
		}
	}
	else{
		a = a + 1;
		for (a; a<b; a++){
			printf("%d \n", a);
		}
	}
	
	
	return 0;
}
