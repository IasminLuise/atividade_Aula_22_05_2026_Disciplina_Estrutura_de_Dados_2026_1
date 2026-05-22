#include <stdio.h>
#include <string.h>

#define TAM 100

int main (){

    char expressao[TAM];
    char pilha[TAM];

    int topo = -1;
    int valido = 1;

    printf("Digite a expressão: ");
    scanf("%s", expressao);

    for(int i = 0; i < strlen(expressao); i++){

        if(expressao[i] == '('){

            topo++;
            pilha[topo] = '(';
        }

        else if(expressao[i] == ')'){

            if(topo == -1){

                valido = 0;
                break;
            }

            topo--;
        }
    }

    if(topo != -1){

        valido = 0;
    }

    if(valido == 1){

        printf("Quantidade de parênteses válida.");

    } else {

        printf("Quantidade de parênteses inválida.");
    }

    return 0;
}
