//BY FELIPE SOARES DO NASCIMENTO. 497182. FINALIZADO as 19:25 do dia 05/08/2020.
#include<stdio.h>
#include<string.h>
int main(){
//variaveis de dados do jogo
    char nomeHeroi1[15];
    char nomeHeroi2[15];
    char nomeLacaio1[15];
    char nomeLacaio2[15];
    char nomeLacaio3[15];
    char nomeLacaio4[15];
//variaveis que guardam dados de vida e ataque dos Lacaios
    int VidaLacaio1, VidaLacaio2, VidaLacaio3, VidaLacaio4;
    int AtaqueLacaio1, AtaqueLacaio2, AtaqueLacaio3, AtaqueLacaio4;
//variavel que guarda pontos de vida dos herois
    int heroi1, heroi2;
//variavel de escolha do 'atacante' e 'defensor'
    char atacando[15], vitima[15];
            //dados de batalha
    int vidaAtacante, vidaVitima;
            //tela inicial do jogo
    printf("\t\t\t\t\t\tArena HearthStone");
    printf("\n\nInsira os dados de batalha do jogador 1.\n\nOBS: Seu heroi pode ter no maximo 30 pontos de vida.\n\n");
            //DADOS DO JOGADOR 1
    printf("Digite o nome do seu heroi (maximo 15 caracteres): ");
    scanf("%[^\n]s", nomeHeroi1);getchar();
    do{
        printf("\n%s - PONTOS DE VIDA: ", nomeHeroi1);
        scanf("%d", &heroi1);
            if(heroi1>30){
                    heroi1=30;
                    printf("Seu heroi recebeu 30 pontos de vida.\n");
            }
    }while(heroi1<1);
            //dados dos lacaios do jogador 1
    printf("\nDigite o nome do seu 1a Lacaio(maximo 15 caracteres): ");
    scanf(" %[^\n]s", nomeLacaio1);getchar();
    do{
        printf("\n%s - PONTOS DE VIDA: ", nomeLacaio1);
        scanf("%d", &VidaLacaio1);
    }while(VidaLacaio1<1 || VidaLacaio1>10);
    do{
        printf("%s - PONTOS DE ATAQUE: ", nomeLacaio1);
        scanf("%d", &AtaqueLacaio1);
    }while(AtaqueLacaio1<0 || AtaqueLacaio1>10);
    printf("\nDigite o nome do seu 2a Lacaio(maximo 15 caracteres): ");
    scanf(" %[^\n]s", nomeLacaio2);getchar();
    do{
        printf("\n%s - PONTOS DE VIDA: ", nomeLacaio2);
        scanf("%d", &VidaLacaio2);
    }while(VidaLacaio2<1 || VidaLacaio2>10);
    do{
        printf("%s - PONTOS DE ATAQUE: ", nomeLacaio2);
        scanf("%d", &AtaqueLacaio2);getchar();
    }while(AtaqueLacaio2<0||AtaqueLacaio2>10);
            //DADOS DO JOGADOR 2
    printf("\n\nInsira os dados de batalha do jogador 2\n\nOBS: Seu heroi pode ter no maximo 30 pontos de vida.\n\n");
            //dados dos personagens para o jogador 2
    printf("Digite o nome do seu heroi (maximo 15 caracteres): ");
    scanf(" %[^\n]s", nomeHeroi2);getchar();
    do{
        printf("\n%s - PONTOS DE VIDA: ", nomeHeroi2);
        scanf("%d", &heroi2);
            if(heroi2>30){
                heroi2=30;
                printf("Seu heroi recebeu 30 pontos de vida.\n");
            }
    }while(heroi2<1);
            //dados dos lacaios do jogador 2
    printf("\nDigite o nome do seu 1 Lacaio(maximo 15 caracteres): ");
    scanf(" %[^\n]s", nomeLacaio3);getchar();
    do{
        printf("\n%s - PONTOS DE VIDA: ", nomeLacaio3);
        scanf("%d", &VidaLacaio3);getchar();
    }while(VidaLacaio3<1 || VidaLacaio3>10);
    do{
        printf("%s - PONTOS DE ATAQUE: ", nomeLacaio3);
        scanf("%d", &AtaqueLacaio3);
    }while(AtaqueLacaio3<0 || AtaqueLacaio3>10);
    printf("\nDigite o nome do seu 2 Lacaio(maximo 15 caracteres): ");
    scanf(" %[^\n]s", nomeLacaio4);getchar();
    do{
        printf("\n%s - PONTOS DE VIDA: ", nomeLacaio4);
        scanf("%d", &VidaLacaio4);
    }while(VidaLacaio4<1 || VidaLacaio4>10);
    do{
        printf("%s - PONTOS DE ATAQUE: ", nomeLacaio4);
        scanf("%d", &AtaqueLacaio4);
    }while(AtaqueLacaio4<0 || VidaLacaio4>10);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\n\n\t\t\t\t\t\tCOMECANDO A BATALHA");
            printf("\nAtaque de %s", nomeHeroi1);
            //ESCOLHA DO ATACANTE
            do{
                printf("\n\nESCOLHA UM LACAIO ALIADO PARA ATACAR O INIMIGO!(Digite o nome do seu atacante): ");
                scanf(" %[^\n]s", atacando);getchar();
                if(strcmp(atacando, nomeLacaio1)!=0 && strcmp(atacando, nomeLacaio2)!=0){printf("\nNOME DE LACAIO INVALIDO.");}
            }while(strcmp(atacando, nomeLacaio1)!=0 && strcmp(atacando, nomeLacaio2)!=0);
            //ESCOLHA DA VITIMA
            do{
                printf("\n\nESCOLHA UM INIMIGO PARA ATACAR! (Digite o nome da sua vitima): ");
                scanf(" %[^\n]s", vitima);getchar();
                if(strcmp(vitima, nomeHeroi2)!=0 && strcmp(vitima, nomeLacaio3)!=0 && strcmp(vitima,nomeLacaio4)!=0){printf("\nNOME DE INIMIGO INVALIDO.");}
            }while(strcmp(vitima,nomeHeroi2)!=0 && strcmp(vitima,nomeLacaio3)!=0 && strcmp(vitima,nomeLacaio4)!=0);

////////////////////////////////////////////////////////////////////////CASO SEJA O LACAIO 1 ATACANDO O HEROI 2///////////////////////////////////////////////////////////////////////////////////////
            if( strcmp(atacando, nomeLacaio1)==0 && strcmp(vitima,nomeHeroi2)==0){
                VidaLacaio1=VidaLacaio1;
                heroi2=heroi2-AtaqueLacaio1;
                printf("\nATAQUE FEITO!");
                }
////////////////////////////////////////////////////////////////////////CASO SEJA O LACAIO 1 ATACANDO O LACAIO 3//////////////////////////////////////////////////////////////////////////////////////
            else if( strcmp(atacando, nomeLacaio1)==0 && strcmp(vitima,nomeLacaio3)==0){
                VidaLacaio1=VidaLacaio1-AtaqueLacaio3;
                VidaLacaio3=VidaLacaio3-AtaqueLacaio1;
                printf("\nATAQUE FEITO!");
                }
///////////////////////////////////////////////////////////////////////CASO SEJA O LACAIO 1 ATACANDO O LACAIO 4//////////////////////////////////////////////////////////////////////////////////////
            else if( strcmp(atacando, nomeLacaio1)==0 && strcmp(vitima,nomeLacaio4)==0){
                VidaLacaio1=VidaLacaio1-AtaqueLacaio4;
                VidaLacaio4=VidaLacaio4-AtaqueLacaio1;
                printf("\nATAQUE FEITO!");
                }
////////////////////////////////////////////////////////////////////////CASO SEJA O LACAIO 2 ATACANDO O HEROI 2///////////////////////////////////////////////////////////////////////////////////////
            else if( strcmp(atacando, nomeLacaio2)==0 && strcmp(vitima,nomeHeroi2)==0){
                VidaLacaio2=VidaLacaio2;
                heroi2=heroi2-AtaqueLacaio2;
                printf("\nATAQUE FEITO!");
                }
////////////////////////////////////////////////////////////////////////CASO SEJA O LACAIO 2 ATACANDO O LACAIO 3//////////////////////////////////////////////////////////////////////////////////////
            else if( strcmp(atacando, nomeLacaio2)==0 && strcmp(vitima,nomeLacaio3)==0){
                VidaLacaio2=VidaLacaio2-AtaqueLacaio3;
                VidaLacaio3=VidaLacaio3-AtaqueLacaio2;
                printf("\nATAQUE FEITO!");
                }
////////////////////////////////////////////////////////////////////////CASO SEJA O LACAIO 2 ATACANDO O LACAIO 4//////////////////////////////////////////////////////////////////////////////////////
            else if( strcmp(atacando, nomeLacaio2)==0 && strcmp(vitima,nomeLacaio4)==0){
                VidaLacaio2=VidaLacaio2-AtaqueLacaio4;
                VidaLacaio4=VidaLacaio4-AtaqueLacaio2;
                printf("\nATAQUE FEITO!");
                }
                //STATUS DE BATALHA
            printf("\n\n\t\t\t\t\t\tSTATUS DE BATALHA");
            //VERIFICAÇÃO DE QUEM MORREU
            if(heroi1<1){printf("\n%s morreu!", nomeHeroi1);}
            if(heroi2<1){printf("\n%s morreu!", nomeHeroi2);}
            if(VidaLacaio1<1){printf("\n%s morreu!", nomeLacaio1);}
            if(VidaLacaio2<1){printf("\n%s morreu!", nomeLacaio2);}
            if(VidaLacaio3<1){printf("\n%s morreu!", nomeLacaio3);}
            if(VidaLacaio4<1){printf("\n%s morreu!", nomeLacaio4);}
            //VERIFICAÇÃO DE QUEM ESTA VIVO
            printf("\n");
            if(heroi1>0){printf("\n%s - VIDA - %d", nomeHeroi1,heroi1);}
            if(VidaLacaio1>0){printf("\n\n%s - VIDA - %d", nomeLacaio1,VidaLacaio1);}
            if(VidaLacaio1>0){printf("\nLACAIO %s - ATAQUE - %d", nomeLacaio1, AtaqueLacaio1);}
            if(VidaLacaio2>0){printf("\nLACAIO %s - VIDA - %d", nomeLacaio2, VidaLacaio2);}
            if(VidaLacaio2>0){printf("\nLACAIO %s - ATAQUE - %d",nomeLacaio2, AtaqueLacaio2);}
            if(heroi2>0){printf("\n\n\n%s - VIDA - %d", nomeHeroi2, heroi2);}
            if(VidaLacaio3>0){printf("\n\nLACAIO %s - VIDA - %d", nomeLacaio3, VidaLacaio3);}
            if(VidaLacaio3>0){printf("\nLACAIO %s - ATAQUE - %d",nomeLacaio3, AtaqueLacaio3);}
            if(VidaLacaio4>0){printf("\nLACAIO %s - VIDA - %d",nomeLacaio4, VidaLacaio4);}
            if(VidaLacaio4>0){printf("\nLACAIO %s - ATAQUE - %d", nomeLacaio4, AtaqueLacaio4);}
    return 0;
}
