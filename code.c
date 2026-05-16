#include <stdio.h>

int main(){
    int limite = 10;

    printf("Contando numeros pares ate %d:\n", limite);

    for(int i = 1; i <= limite; i++){
        if(i%2 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}