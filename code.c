#include <stdio.h>

int main(){
    int limite = 10;

    printf("Contando numeros pares ate %d:\n", limite);

    for(int i = 0; i <= limite; i+=2){
            printf("%d\n", i);
        
    }

    return 0;
}