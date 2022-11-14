#include<stdio.h>

int main(){
    int  num, soma, cont,result;
    
    soma=0;
    cont=0;
    
    printf("digite um numero, para incluir na media, ou 0, se quiser obter o resultado");
    scanf("%d",&num);
    
    while(num!=0){
        soma+=num;
        cont++;
        printf("digite o numero");
        scanf("%d",&num);
    }
    result=soma/cont;
    printf("%d", result);
    return 0;
}