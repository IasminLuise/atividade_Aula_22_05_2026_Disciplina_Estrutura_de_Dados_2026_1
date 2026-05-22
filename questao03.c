#include <stdio.h>
#include <string.h>

#define TAM 100

int main (){

    char palavra[TAM];
    char pilha[TAM];

    int topo = -1;
    int tamanho;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for(int i = 0; i < tamanho / 2; i++){

        topo++;
        pilha[topo] = palavra[i];
    }

    for(int i = (tamanho + 1) / 2; i < tamanho; i++){

        if(palavra[i] != pilha[topo]){

            palindromo = 0;
            break;
        }

        topo--;
    }

    if(palindromo == 1){

        printf("A palavra é um palíndromo.");

    } else {

        printf("A palavra não é um palíndromo.");
    }

    return 0;
}
