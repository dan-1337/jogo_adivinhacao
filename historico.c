#include <stdlib.h>
#include <stdio.h>

int jogadas = 0, c = 0, jogos[5] = {0, 0, 0, 0, 0};
void dormir();

void adicionar_historico(int num_tentativas) {
    
    for (int x = 5; x >= 0; x--) {
        if (x == 0) {
            jogos[x] = num_tentativas;
        } else {
            jogos[x] = jogos[(x-1)];
        }
    }
    c++;
    jogadas++;

    if(c > 4) {
        c = 0;
    } 
}

void mostrar_historico() {
    int i, c;

    if (jogadas == 0) {
        printf("\nO histórico está vazio!\n\n");
        dormir(1);

    } else {
        printf("--------------------\n");
        printf("|     HISTÓRICO     |\n");
        printf("--------------------\n");

        if(jogadas < 5) {
            i = jogadas - 1;
            c = 1;
        } else {
            i = 4;
            c = (jogadas - 5) + 1;
        }

        for(i; i >= 0; i--) {
            printf("Jogo %d: %d tentativas\n", c, jogos[i]);
            c++;
        }
    }
}

void limpar_historico() {
    for(int i = 0; i < 5; i++) {
        jogos[i] = 0;
    }

    jogadas = 0;
    c = 0;

    printf("O histórico foi limpo!\n");

}