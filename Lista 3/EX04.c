#include<stdio.h>

int main(){
    int x;
    printf("digite um número: ");
    scanf("%d", &x);

    

    if ((x % 5) == 0){
        printf("é divisivel");
    }
    else{
        printf("não é divisível");
    }

    return 0;
}
