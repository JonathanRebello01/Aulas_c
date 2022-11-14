#include<stdio.h>

int main(){
    int x, y;
    printf("digite dois números: ");
    scanf("%d %d", &x, &y);

    if (x < y){
        printf("%d", x);
        printf("%d", y);
    }
    else{
        printf("%d", y);
        printf("%d", x);
    }

    return 0;
}
