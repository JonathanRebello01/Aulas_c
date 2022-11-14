// Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2). Todos
// os números lidos e o valore de retorno devem ser do tipo float.


#include <stdio.h>
#include <conio.h>
#include <math.h>
float distancia(float X1, float Y1, float X2, float Y2);


int main(){
    float x1, y1, x2, y2, result;

    printf("Digite as coordenadas de cada ponto: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    result = distancia(x1, y1, x2, y2);
    printf("%f", result);

    return 0;
}

float distancia(float X1, float Y1, float X2, float Y2){
    float RESULTADO, aux1, aux2, aux3;

    aux1 = (X2-X1)*(X2-X1);
    aux2 = (Y2-Y1)*(Y2-Y1);
    aux3 = aux1+aux2;
    RESULTADO = sqrt(aux3);



    return RESULTADO;
}