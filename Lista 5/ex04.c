// Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa
// idade expressa em dias.

#include<stdio.h>
int numeroDias(int x, int y, int z);


int main(){
    int dias, meses, anos, resultado;

    printf("escreva a idade da pessoa: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    resultado = numeroDias(anos, meses, dias);
    printf("%d", resultado);

    return 0;
}

int numeroDias(int x, int y, int z){
    int RESULTADO, aux;

    aux = x * 365;

    RESULTADO = aux + z;

    aux = y * 30;

    RESULTADO = RESULTADO + aux;



    return RESULTADO;
}