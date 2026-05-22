#include <stdio.h>
#include <string.h>

#define TAM 100

int main (){

    char expressao[TAM];

    int pilha[TAM];
    int topo = -1;

    int valor1;
    int valor2;
    int resultado;

    printf("Digite a expressão pós-fixa: ");
    scanf("%s", expressao);

    for(int i = 0; i < strlen(expressao); i++){

        if(expressao[i] >= '0' && expressao[i] <= '9'){

            topo++;

            pilha[topo] = expressao[i] - '0';
        }

        else {

            valor1 = pilha[topo];
            topo--;

            valor2 = pilha[topo];
            topo--;

            if(expressao[i] == '+'){

                resultado = valor2 + valor1;
            }

            else if(expressao[i] == '-'){

                resultado = valor2 - valor1;
            }

            else if(expressao[i] == '*'){

                resultado = valor2 * valor1;
            }

            else if(expressao[i] == '/'){

                resultado = valor2 / valor1;
            }

            topo++;

            pilha[topo] = resultado;
        }
    }

    printf("Resultado da expressão: %d", pilha[topo]);

    return 0;
}
