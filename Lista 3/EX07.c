#include<stdio.h>

int main(){
	float salario,prestacao;
    printf("Digite o seu salario bruto: ");
    scanf("%f", &salario);
    printf("digte o valor da prestação");
    scanf("%f", &prestacao);

    if(prestacao <= salario*0.3){
        printf("pode pegar o emprestimo paezao, vai fundo");
    }
    else{
        printf("ih, vai dar nao");
    }
	return 0;
}
