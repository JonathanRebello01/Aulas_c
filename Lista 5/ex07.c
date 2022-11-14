// Elabore uma função chamada primo que receba um número inteiro e retorne 1 se esse número
// for primo ou retorne 0 se não for primo. Depois que receber um desses números da função
// primo, escrever no programa principal “É primo” ou “Não é primo”, de acordo com o número
// retornado.


#include <stdio.h>
float primo(int n);

int main(){
    float x,res;

    printf("digite um numero para saber se é primo: ");
    scanf("%f", &x);
        
    res = primo(x);
    if(res == 1){
        printf("nao e primo");
    }
    else{
        printf(" primo");
    }

    return 0;
}

float primo(int n){
    int contador;
    int resultado;
    resultado = 0;
    contador = n-1;

    if (n==1){
        resultado = 0;
    }

    else{

     for (contador; contador>=2; contador--){
        if(n % contador == 0){
            resultado = 1;
        }
     }
    }
    return resultado;

}