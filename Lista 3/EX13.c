#include<stdio.h>

int main(){
    int x, y;
    printf("digite dois números: ");
    scanf("%d %d", &x, &y);

    if (x > y){
        printf("%d", x);
    }
    else{
        printf("%d", y);
    }

    return 0;
}
