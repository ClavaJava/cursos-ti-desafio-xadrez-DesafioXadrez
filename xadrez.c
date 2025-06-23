#include <stdio.h>

int main() {
// Movimento da TORRE - usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");


    int torre;


    for (torre = 0; torre <= 4; torre ++) {
        printf("DIREITA \n");
    }
     printf("\n"); // linha em branco para separar as seções


    printf("Movimento do Bispo (5 casas para cima e direita):\n");

    int bispo = 1;

    while (bispo <= 5) {
     printf("CIMA e DIREITA\n");
     bispo++;
    }

    printf("\n"); // linha em branco para separar as seções

    printf("Movimento da Rainha (8 casas para esquerda):\n");


    int rainha = 1;

    do {
      printf("ESQUERDA\n");
      rainha++;
      } while (rainha <=8 );




    return 0;
}
