#include <stdio.h>
int main(){
float nivelDoPersonagem;
char nomeDoPersonagem[30];

    printf("Digite o nome do seu Personagem:");
    scanf("%s",&nomeDoPersonagem);
    printf("Digite o nivel de XP do Personagem:\n");
    scanf("%f",&nivelDoPersonagem);

    if(nivelDoPersonagem < 1000){
            printf("%s o nivel de xp é Ferro",nomeDoPersonagem);
    }else if(nivelDoPersonagem >= 1001 && nivelDoPersonagem <= 2000){
            printf("%s o nivel de xp é Bronze",nomeDoPersonagem);
    }else if (nivelDoPersonagem >= 2001 && nivelDoPersonagem <= 5000){
            printf("%s o nivel de xp é Prata",nomeDoPersonagem);
    }else if (nivelDoPersonagem >= 5001 && nivelDoPersonagem <= 7000){
            printf("%s o nivel de xp é Ouro", nomeDoPersonagem);
    }else if (nivelDoPersonagem >= 7001 && nivelDoPersonagem <= 8000){
            printf("%s o nivel de xp é Platina",nomeDoPersonagem);
    }else if (nivelDoPersonagem >= 8001 && nivelDoPersonagem <= 9001){
            printf("%s o nivel de xp é Ascendente");
    }else if (nivelDoPersonagem >= 9001 && nivelDoPersonagem <= 10000){
            printf ("%s o nivel de xp é Imortal",nomeDoPersonagem);
    }else if (nivelDoPersonagem > 10001){
            printf("%s o nivel de xp é Radiante",nomeDoPersonagem);
    }

        return 0;
}