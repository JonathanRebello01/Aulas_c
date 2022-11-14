// Construa um programa que leia dois números inteiros e os envie para uma função chamada
// maior. Essa função deverá retornar o maior número dos dois.



#include<stdio.h>
int maior(int x, int y);


int main(){
    int n1, n2, resultado;

    printf("Digite dois numeros para saber o maior: ");
    scanf("%d%d", &n1, &n2);

    resultado = maior(n1, n2);
    printf("%d", resultado);

    return 0;
}

int maior(int x, int y){

    if(x > y){
        return x;
    }
    else if(x < y){
        return y;
    }
}