#include<stdio.h>

int main(){
    int i,soma;
    soma=0;
    for(i=1;i<101;i++){
        soma=soma+i;
        printf("%d \n", i);
    }
    
   printf("%d \n", soma);
    
    return 0;
}
