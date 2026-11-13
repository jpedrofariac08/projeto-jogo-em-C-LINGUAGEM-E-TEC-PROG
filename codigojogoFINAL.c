#include <stdio.h>
#include <stdlib.h>

void casa(char nomePersonagem[], char nomeFazenda[], int dados[]){
    int opCasa;
printf(
"==================================\n"
"            CASA VELHA            \n"
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
    do{ //Repete o menu do lago
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
