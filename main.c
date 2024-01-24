#include <stdio.h>
 
    int main(){
        int nivelDoJogador=20000;
        char nome[30];

            printf("Digite o nome do seu personagem:");
            scanf(" %c", &nome);
            printf("Digite o nivel do seu personagem:");
            scanf("%d", &nivelDoJogador);

              switch (nivelDoJogador < 1000) {
        case 1:
            printf("Nível do jogador acima de 1000.\n");
            break;
        default:
            printf("Nível do jogador 1000 ou abaixo.\n");
    }


            return 0;

    
    }