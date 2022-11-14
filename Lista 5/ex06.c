// O peso ideal de uma pessoa é calculado através da seguinte fórmula:
// Para homens: (72.6*h) - 58
// Para mulheres: (62.1*h) - 44.7
// Fazer um algoritmo para ler a altura e o sexo de uma pessoa, criar um módulo chamado
// calcula_peso, passar a altura e o sexo como parâmetros para a função calcula_peso e receber
// desta função o valor do peso ideal da pessoa. Depois que receber o peso ideal, escrever na
// função principal.

#include <stdio.h>
float calcula_peso(int SEXO, float ALTURA);

int main(){
    float alt, resultado;
    int sexo;
    printf("Informe \"1\" para sexo masculino, ou \"2\", para sexo feminino e altura: ");
    scanf("%d %f", &sexo, &alt);
    resultado = calcula_peso(sexo,alt);
    printf("peso ideal: %f", resultado);

    return 0;
}

float calcula_peso(int SEXO, float ALTURA){
    float peso;

    if(SEXO == 1){
        peso = (72.6*ALTURA)-58;
    }
    else if(SEXO == 2){
        peso = (62.1*ALTURA)-44.7;
    }
    return peso;
}