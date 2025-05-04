#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Funções e variáveis.
    srand(time(0));
    int opcao, escolhaJogador, escolhaComputador;
    char sn;
    // Código-fonte.
    while (opcao < 1 || opcao > 3) {
    printf("\n-------------------------\n");
    printf("\nBEM VINDO AO JOGO JOKENPO\n");
    printf("\n-------------------------\n");
    printf("[1] Iniciar jogo\n");
    printf("[2] Regras\n");
    printf("[3] Sair do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("-------------------\n");
    switch (opcao) {
        case 1:
        while (1) {
            escolhaComputador = rand() % 3 + 1;
            escolhaJogador = 0;
            while (escolhaJogador < 1 || escolhaJogador > 3) {
            // Escolha do jogador.
            printf("[1] Pedra\n");
            printf("[2] Papel\n");
            printf("[3] Tesoura\n");
            printf("Faça sua escolha: ");
            scanf("%d", &escolhaJogador);
            if (escolhaJogador < 1 || escolhaJogador > 3) {
                printf("\nEscolha inválida! Digite um número entre 1 e 3.\n");
                printf("-------------------\n");
                continue;
            }
            printf("------------------\n");
            // Escolha do computador.
            if (escolhaComputador == 1) {
                printf("Escolha do computador: [1] Pedra\n");
            }
            else if (escolhaComputador == 2) {
                printf("Escolha do computador: [2] Papel\n");
            }
            else {
                printf("Escolha do computador: [3] Tesoura\n");
            }
            printf("-------------------\n");
            // Vencedor do jogo.
            if (escolhaJogador == escolhaComputador) {
                printf("Jogo empatou!\n");
            }
            else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
                     (escolhaJogador == 2) && (escolhaComputador == 1) ||
                     (escolhaJogador == 3) && (escolhaComputador == 2)) {
                printf("Jogador ganhou!\n");
            }
            else {
                printf("Jogador perdeu!\n");
            }
            printf("-------------------\n");
            printf("Deseja jogar novamente? [S] ou [N]: ");
            scanf(" %c", &sn);
            if (sn == 'S' || sn == 's') {
                printf("-------------------\n");
                break;
            }
            else if (sn == 'N' || sn == 'n') {
                printf("-------------------\n");
                printf("Até mais...\n");
                return 0;
            }
            else {
                printf("Opção inválida! Digite apenas S ou N!\n");
                return 0;
            }
        }    }
        break;   
        case 2:
            printf("\nRegras do jogo:\n");
            printf("-------------------\n");
            printf("1. Pedra ganha de: tesoura.\n");
            printf("2. Papel ganha de: pedra.\n");
            printf("3. Tesoura ganha de: papel.\n");
            printf("-------------------\n");
        break;
        case 3:
            printf("-------------------\n");
            printf("Até mais.\n");
        break;
        default:
            printf("-------------------\n");
            printf("Opção inválida. Digite apenas 1, 2 ou 3.\n");
        break;
    }
    }
    return 0;
}