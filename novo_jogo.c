#include <stdlib.h>
#include <stdio.h>

void adicionar_historico();

int sortear_numero() {
    int numero_sorteado = rand() % 100 + 1;

    return numero_sorteado;
}

void novo_jogo() {
    int opc, n_sorteado, resp, tentativas = 0;

    n_sorteado = sortear_numero();

    do {
        if (tentativas == 0) {
            printf("\nTente adivinhar um número de 1 a 100: ");
            scanf("%d", &resp);

        } else if(resp < n_sorteado) {
            printf("\nMuito baixo! Tente um valor mais alto: ");
             scanf("%d", &resp);

        } else if(resp > n_sorteado) {
            printf("\nMuito alto! Tente um valor mais baixo: ");
            scanf("%d", &resp);
 
        }

        tentativas += 1;
    } while (resp != n_sorteado);    

    adicionar_historico(tentativas);
        
    printf("------------------------------------------------\n");
    printf("O número era %d! Você acertou em %d tentativas!\n", n_sorteado, tentativas);
    printf("------------------------------------------------\n");   

}