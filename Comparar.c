#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("Bem-vindo ao jogo maior, menor ou igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparacao.\n");
    printf("M. maior\n");
    printf("N. menor\n");
    printf("I. igual\n");

    printf("Digite o tipo de comparacao: \n");
    scanf(" %c", &tipoComparacao);

    printf("Digite um numero entre 1 e 100: \n");
    scanf("%d", &numeroJogador);

    printf("O numero do computador era %d\n", numeroComputador);

    switch (tipoComparacao) {
        case 'M':
        case 'm':
            resultado = (numeroJogador > numeroComputador) ? 1 : 0;

        break;
        case 'N':
        case 'n':
            resultado = (numeroJogador < numeroComputador) ? 1 : 0;

        break;
        case 'I':
        case 'i':
            resultado = (numeroJogador == numeroComputador) ? 1 : 0;

        break;
        default:
        printf("Tipo de comparacao invalida!\n");
        break;
    }

        if (resultado == 1) {
            printf("parabens, voce farmou muita aura!\n");
        } else if (resultado == 0) {
            printf("Voce perdeu, tente nova mente seu beta!\n");
        }

    return 0;

}
