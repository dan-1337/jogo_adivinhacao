#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void novo_jogo(), mostrar_historico(), limpar_historico(), dormir();

int main() {
    int opc;

    srand(time(NULL));
 
    while(1) {    
        printf("---------------------------------------");
        printf("\n   Bem vindo ao jogo da Adivinhação!\n");
        printf("---------------------------------------\n");
        printf("1 - Novo jogo\n");
        printf("2 - Ver últimos 5 jogos\n");
        printf("3 - Limpar histórico\n");
        printf("4 - Sair\n");
        printf("opção: ");
        scanf("%d", &opc);

        if(opc == 1) {
            novo_jogo();
            dormir(3);

        } else if(opc == 2) {
            mostrar_historico();
            dormir(3);

        } else if(opc == 3) {
            limpar_historico();
            dormir(1);

        } else if (opc == 4) {
            printf("Até logo!\n");
            dormir(1);
            break;

        } else {
            printf("Opção inválida!\n");
            dormir(1.5);

        }    
    }

    return EXIT_SUCCESS;
}