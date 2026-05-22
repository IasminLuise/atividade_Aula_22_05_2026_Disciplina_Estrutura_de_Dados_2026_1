#include <stdio.h>

#define TAM 100

int main (){

    int numero;
    int pilha[TAM];
    int topo = -1;
    int resto;

    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &numero);

    while(numero > 0){

        resto = numero % 2;

        topo++;
        pilha[topo] = resto;

        numero = numero / 2;
    }

    printf("Número convertido para binário: ");

    while(topo >= 0){

        printf("%d", pilha[topo]);

        topo--;
    }

    return 0;
}
