#include<stdio.h>

int main(){
    int min, seg, h, resth, restmin;
    printf("informe um valor em segundo: ");
    scanf("%d", &seg);

    h = seg / 3600;
    resth = seg % 3600;
    min = resth / 60;
    restmin = resth % 60;
    seg = restmin;

    printf("Passaram-se, %d horas, %d minutos e %d segundos.", h, min, seg);




    return 0;
}