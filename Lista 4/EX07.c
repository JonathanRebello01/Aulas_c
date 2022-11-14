#include<stdio.h>

int main(){
	int num, soma;
for (num = 25; num <= 200; num++){
	if(num%2==0){
		soma=soma+num;
	}
}
printf("%d", soma);

	return 0;
}
