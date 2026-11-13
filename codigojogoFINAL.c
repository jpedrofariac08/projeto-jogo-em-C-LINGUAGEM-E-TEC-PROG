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
