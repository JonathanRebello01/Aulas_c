// Desenvolva uma função que receba para a idade de um nadador como parâmetro e dentro dessa
// função escreva a categoria do mesmo, de acordo com a tabela abaixo:

#include<stdio.h>
#include<string.h>
void categoria(int IDADE);


int main(){
    int idade;
    char serie[10];

    printf("digite a idade do nadador: ");
    scanf("%d",&idade);

    categoria(idade);
  
return 0;
}

void categoria(int IDADE){
    char CATEGORIA[10];

    if (IDADE >= 5 && IDADE <= 7){
        strcpy(CATEGORIA,"Infantil A");
    }
    if (IDADE >= 8 && IDADE <= 10){
        strcpy(CATEGORIA,"Infantil B");
    }
    if (IDADE >= 11 && IDADE <= 13){
        strcpy(CATEGORIA,"Juvenil A");
    }
    if (IDADE >= 14 && IDADE <= 17){
        strcpy(CATEGORIA,"Juvenil B");
    }
    if (IDADE >= 18){
        strcpy(CATEGORIA,"Adulto");
    }

    printf ("%s",CATEGORIA);
}

