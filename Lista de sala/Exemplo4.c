#include<stdio.h>
#include<stdlib.h>



int main(){
	//declaração de variável
	float a=2, b=5, c=2;
	float media; //Media a,b,c
	float delta; //Delta da formula de bhaskara
	
	media = (a+b+c)/3;
	delta = b*b - 4*a*c;
	
	printf("Media %f\n",media);
	printf("Delta %f\n",delta);
	printf("\n\n");
	
	
		return 0;
}

