#include <stdio.h>
#include <stdlib.h>
void casa(char nomePersonagem[], char nomeFazenda[]){
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
"1- Abrir inventario\n0- Sair\nEscolha sua acao: \n", nomeFazenda, nomePersonagem
);
scanf("%d", &opCasa);
    if(opCasa == 1){
        printf("Dinheiro: x\nSementes: x\nPeixes: x\nPlantas: x");//, dinheiro, sementes, peixes, plantas); não sabemos guardar informações como itens, pois não foi ensinado.
    }else if(opCasa == 0){
        return; //Laço de repetição ainda não foi ensinado, logo o return so para o jogo.
    }else{
        printf("Opcao invalida!!");
    }
}
