#include <stdio.h>
#include <stdlib.h>

void casa(char nomePersonagem[], char nomeFazenda[], int dados[]){
    int opCasa;
printf(
"==================================\n"
"            CASA Velha            \n"
"==================================\n"
"+--------------------------------+\n"
"|                                |\n"
"|        __________________      |\n"
"|       /___/____/_____/___\\     |\n"
"|      /____________________\\    |\n"
"|      |   /            /   |    |\n"
"|      |  ____      ____    |    |\n"
"|      | | /  |    |  / |   |    |\n"
"|      | |____|    |____|   |    |\n"
"|      |      /             |    |\n"
"|      |   ========         |    |\n"
"|      |      ____     /    |    |\n"
"|      |  /  |    |    //   |    |\n"
"|_/_/__|_____|____|_________|_/_/|\n"
"|           /     /              |\n"
"+--------------------------------+\n"
"\nNome da fazenda: %s\n"
"Seu nome: %s\n"
"Dia: %d\n", nomeFazenda, nomePersonagem, dados[4]
);
    do{ //Repete o menu da casa ate o jogador escolher sair
        printf("\n1- Abrir inventario\n0- Sair\nEscolha sua acao: ");
        scanf("%d", &opCasa);
        if(opCasa == 1){
            printf("\n----------- INVENTARIO -----------\n");
            printf("Dinheiro: R$ %d,00\nSementes: %d\nPeixes: %d\nPlantas: %d\n", dados[0], dados[1], dados[2], dados[3]);
            if(dados[0] >= 1000){
                printf("Voce ja pode comprar a CASA NOVA na Loja!!\n");
            }else{
                printf("Faltam R$ %d,00 para comprar a casa nova.\n", 1000 - dados[0]);
            }
            printf("----------------------------------\n");
        }else if(opCasa != 0){
            printf("Opcao invalida!!\n");
        }
    }while(opCasa != 0);
}

void lago(int dados[]){
    int opLago;
    printf(
"===============================================================================\n"
"                  LAGO - VISAO DE LADO COM PEIXES E VARA                      \n"
"===============================================================================\n"
"\n"
" ----------------------------------------------------------------------------- \n"
" |                                                                           | \n"
" |       &&&                     &&&&&                        &&&            | \n"
" |      &&&&&                   &&&&&&&                      &&&&&           | \n"
" |     &&&&&&&                 &&&&&&&&&                    &&&&&&&          | \n"
" |       |||                      |||                         |||            | \n"
" |       |||                      |||                         |||            | \n"
" |                                                                           | \n"
" |   VARA DE PESCA                                                           | \n"
" |          /|                                                               | \n"
" |         / |                                                               | \n"
" |        /  |                                                               | \n"
" |       /   |                                                               | \n"
" |      /    |                                                               | \n"
" |           |                                                               | \n"
" |           |                                                               | \n"
" |~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" |~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" |~~~~~~~~~~~|~~~~~~><(((o>~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" |~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" |~~~~~~~~~~~|~~~><>~~~~~~~~~~~~~~~~~~~~~~~><((o>~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n"
" ----------------------------------------------------------------------------- \n"
"\n"
"                     O LAGO ESTA PRONTO PARA PESCAR                           \n"
"\n"
);
    do{ //Repete o menu do lago ate o jogador escolher sair
        printf("\nPescas restantes hoje: %d\n", 3 - dados[5]);
        printf("1-Pescar\n0-Sair\n===============================================================================\nEscolha sua acao: ");
        scanf("%d", &opLago);
        if(opLago == 1){
            if(dados[5] < 3){ //Limite de 3 pescas por dia
                dados[2] = dados[2] + 1; //Mais 1 peixe no inventario
                dados[5] = dados[5] + 1; //Mais 1 pesca feita hoje
                printf("\nParabens, voce pegou 1 peixe!!\n><>\nPeixes no inventario: %d\n", dados[2]);
            }else{
                printf("\nVoce ja pescou 3 vezes hoje! Durma para pescar de novo amanha.\n");
            }
        }else if(opLago != 0){
            printf("Opcao invalida!!\n");
        }
    }while(opLago != 0);
}


void plantacao(int dados[], int espacos[3][2]){
    int opPlantacao, i, quantidade;
printf(
"===============================================================================\n"
"                        PLANTACAO - VISAO DE CIMA                              \n"
"===============================================================================\n"
"\n"
" ----------------------------------------------------------------------------- \n"
" |                                                                           | \n"
" |                         AREA DE PLANTACAO                                 | \n"
" |                                                                           | \n"
" |        ESPACO 1            ESPACO 2            ESPACO 3                   | \n"
" |                                                                           | \n"
" |      +-------------+      +-------------+      +-------------+            | \n"
" |      |             |      |             |      |             |            | \n"
" |      |    \\ | /    |      |    \\ | /    |      |    \\ | /    |            | \n"
" |      |     \\|/     |      |     \\|/     |      |     \\|/     |            | \n"
" |      |    --*--    |      |    --*--    |      |    --*--    |            | \n"
" |      |     /|\\     |      |     /|\\     |      |     /|\\     |            | \n"
" |      |    / | \\    |      |    / | \\    |      |    / | \\    |            | \n"
" |      |             |      |             |      |             |            | \n"
" |      +-------------+      +-------------+      +-------------+            | \n"
" |                                                                           | \n"
" |                   AS PLANTAS ESTAO BEM CUIDADAS                           | \n"
" |                                                                           | \n"
" ----------------------------------------------------------------------------- \n"
"\n"
    );
    do{ //Repete o menu da plantacao ate o jogador escolher sair
        printf("\n--------- SITUACAO DOS ESPACOS ---------\n");
        for(i = 0; i < 3; i++){ //Percorre a matriz mostrando cada espaco
            if(espacos[i][0] == 0){
                printf("Espaco %d: vazio\n", i + 1);
            }else if(espacos[i][1] >= 3){
                printf("Espaco %d: PRONTO PARA COLHER!\n", i + 1);
            }else{
                printf("Espaco %d: crescendo (%d de 3 dias)\n", i + 1, espacos[i][1]);
            }
        }
        printf("Sementes no inventario: %d\n", dados[1]);
        printf("\n1-Plantar\n2-Regar plantacao\n3-Colher\n0-Sair\n===============================================================================\nEscolha sua acao: ");
        scanf("%d", &opPlantacao);

        if (opPlantacao == 1){
            quantidade = 0;
            for(i = 0; i < 3; i++){ //Planta uma semente em cada espaco vazio
                if(espacos[i][0] == 0){
                    if(dados[1] > 0){
                        espacos[i][0] = 1;      //Espaco agora esta plantado
                        espacos[i][1] = 0;      //Comeca com 0 dias de crescimento
                        dados[1] = dados[1] - 1; //Gasta 1 semente
                        quantidade = quantidade + 1;
                    }
                }
            }
            if(quantidade > 0){
                printf("\n%d semente(s) plantada(s)!!\n", quantidade);
            }else if(dados[1] == 0){
                printf("\nVoce nao tem sementes! Compre na Loja.\n");
            }else{
                printf("\nTodos os espacos ja estao ocupados!\n");
            }
        } else if (opPlantacao == 2){
            quantidade = 0;
            for(i = 0; i < 3; i++){ //Conta quantos espacos tem planta
                if(espacos[i][0] == 1){
                    quantidade = quantidade + 1;
                }
            }
            if(quantidade > 0){
                printf("\nVoce regou as plantas, agora elas cresceram mais saudaveis!!\n");
            }else{
                printf("\nNao ha nada plantado para regar.\n");
            }
        } else if (opPlantacao == 3){
            quantidade = 0;
            for(i = 0; i < 3; i++){ //Colhe so os espacos com 3 dias de crescimento
                if(espacos[i][0] == 1){
                    if(espacos[i][1] >= 3){
                        espacos[i][0] = 0;      //Espaco volta a ficar vazio
                        espacos[i][1] = 0;
                        dados[3] = dados[3] + 1; //Mais 1 planta no inventario
                        quantidade = quantidade + 1;
                    }
                }
            }
            if(quantidade > 0){
                printf("\nVoce colheu %d planta(s)!! Venda na Loja.\n", quantidade);
            }else{
                printf("\nNenhuma planta esta pronta para colher ainda.\n");
            }
        } else if (opPlantacao != 0){
            printf("Opcao invalida!!\n");
        }
    }while(opPlantacao != 0);
}

