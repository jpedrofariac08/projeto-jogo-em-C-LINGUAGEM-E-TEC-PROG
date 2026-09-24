#include <stdio.h>
#include <stdlib.h>
//CODIGO BASE INCOMPLETO PARA A PRIMEIRA ENTREGA!
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
void lago(){
    int peixes, tentativasPescaDia, opLago;
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
printf("1-Pescar\n0-Sair\n===============================================================================\nEscolha sua acao:");
scanf("%d", &opLago);
if (opLago == 1){
    printf("Parabens, voce pegou 1 peixe!!\n><>");
}else if(opLago == 0){
    return; //Laço de repetição ainda não foi ensinado, logo o return so para o jogo.
} else{
    printf("Opcao invalida!!");
}
}
void plantacao(){
    int crescimento[3], espacosPlantacao[3];
    int plantas, opPlantacao;
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
"                     A PLANTACAO ESTA PRONTA PARA COLHEITA                    \n"
"\n"
    );
printf("1-Plantar\n2-Regar plantacao\n0-Sair\n===============================================================================\nEscolha sua acao:");
scanf("%d", &opPlantacao);
if (opPlantacao == 1){
    printf("Sementes plantadas!!");
} else if (opPlantacao == 2){
    printf("Voce regou as plantas, agora elas cresceram mais saudaveis!!");
} else if (opPlantacao == 0){
    return; //Laço de repetição ainda não foi ensinado, logo o return so para o jogo.
} else{
    printf("Opcao invalida!!");
}
}
void celeiro(){
    int opCeleiro;
    printf(
"==================================\n"
"            CELEIRO               \n"
"==================================\n"
"+--------------------------------+\n"
"|           ^__^                 |\n"
"|           (oo)\\_______         |\n"
"|           (__)\\       )\\/\\     |\n"
"|               ||----w |        |\n"
"|               ||     ||        |\n"
"|                                |\n"
"|   ~~~~~~~~~~~~~~~~~~~~~~~~~~   |\n"
"|   |  |  |  |  |  |  |  |  |  | |\n"
"|   |__|__|__|__|__|__|__|__|__| |\n"
"+--------------------------------+\n"
"\n"
"1- Alimentar as vacas\n"
"2- Acariciar as vacas\n"
"0- Sair\n"
"Escolha sua acao: "
    );
    scanf("%d", &opCeleiro);

    if (opCeleiro == 1) {
        printf("\nVoce alimentou as vacas. Elas parecem felizes!!\n");
    } else if (opCeleiro == 2) {
        printf("\nVoce acariciou as vacas. Muuuuuu!!\n");
    } else if (opCeleiro == 0) {
        return;
    } else {
        printf("\nOpcao invalida!\n");
    }
}
void loja(){
    int opLoja, opVenda, opCompra;
    printf(
"==========================================\n"
"                  LOJA                    \n"
"==========================================\n"
"+---------------------------------------+\n"
"|         ______________________        |\n"
"|        /                      \\       |\n"
"|       /________________________\\      |\n"
"|       |   ==================   |      |\n"
"|       |   |     LOJINHA    |   |      |\n"
"|       |   ==================   |      |\n"
"|       |                        |      |\n"
"|       |  .--------.  .------.  |      |\n"
"|       |  | []  [] |  |      |  |      |\n"
"|       |  | []  [] |  |      |  |      |\n"
"|       |  |        |  |   O  |  |      |\n"
"|       |  '--------'  |      |  |      |\n"
"|       |              |      |  |      |\n"
"|       |______________|______|__|      |\n"
"|       /__________________________\\    |\n"
"+---------------------------------------+\n"
"\n1- Vender\n2- Comprar\n0- Sair\n==========================================\nEscolha sua acao: \n"
);
scanf("%d", &opLoja);
if(opLoja == 1){
    printf("Escolha o que deseja vender!!\n1- Peixe: 20,00\n2- Planta: 100,00\n0- Sair\nEscolha a opcao: \n");
    scanf("%d", &opVenda);
    if(opVenda == 1){
        printf("Peixes vendidos!!\n"); //dinheiro e inventario ainda nao implementados
    }else if(opVenda == 2){
        printf("Plantas vendidas!!\n"); //dinheiro e inventario ainda nao implementados
    }else if(opVenda == 0){
        return;
    }else{
        printf("Opcao invalida\n");
        return;
    }
}else if(opLoja == 2){
    printf("Escolha o que deseja comprar!!\n1- Semente: 20,00\n2- CASA NOVA(objetivo final): 1000,00\n0- Sair\nEscolha a opcao:\n");
    scanf("%d", &opCompra);
    if(opCompra == 1){
        printf("Compra de semente efetuada!!\n");
    }else if(opCompra == 2){
        printf(
"=================================================================================================\n"
"                              PARABENS! VOCE ZEROU O JOGO!                                       \n"
"=================================================================================================\n"
"\n"
" ----------------------------------------------------------------------------------------------- \n"
" |                                                                                             | \n"
" |                       VOCE CONQUISTOU SUA CASA NOVA!                                        | \n"
" |                                                                                             | \n"
" |                                  __________________________                                 | \n"
" |                            _____/_________________________/\\                                | \n"
" |                       ____/______________________________/  \\                               | \n"
" |                  ____/__________________________________/____\\                              | \n"
" |                 /_____________________________________________\\                             | \n"
" |                 |                                             |\\                            | \n"
" |                 |      +---------+        +---------+         | \\                           | \n"
" |                 |      |  |   |  |        |  |   |  |         |  |                          | \n"
" |                 |      |--+---+--|        |--+---+--|         |  |                          | \n"
" |                 |      |  |   |  |        |  |   |  |         |  |                          | \n"
" |                 |      +---------+        +---------+         |  |                          | \n"
" |                 |                                             |  |                          | \n"
" |                 |=============================================|  |                          | \n"
" |                 |||||||||||||||||||||||||||||||||||||||||||||||  |                          | \n"
" |                 |                                             |  |                          | \n"
" |                 |   +---------+                  +---------+  |  |                          | \n"
" |                 |   |  |   |  |                  |  |   |  |  |  |                          | \n"
" |                 |   |--+---+--|                  |--+---+--|  |  |                          | \n"
" |                 |   |  |   |  |                  |  |   |  |  |  |                          | \n"
" |                 |   +---------+                  +---------+  |  |                          | \n"
" |                 |                                             |  |                          | \n"
" |                 |                  ___________                |  |                          | \n"
" |                 |                 |           |               |  |                          | \n"
" |                 |                 |   _____   |               |  |                          | \n"
" |                 |                 |  |     |  |               |  |                          | \n"
" |                 |                 |  |     |  |               |  |                          | \n"
" |                 |                 |  |    o|  |               |  |                          | \n"
" |                 |                 |__|_____|__|               |  |                          | \n"
" |                 |_____________________________________________|  |                          | \n"
" |                 |                                             |  |                          | \n"
" |                 |                                             | /                           | \n"
" |                 |_____________________________________________|/                            | \n"
" |                                                                                             | \n"
" |               &&&&&                 &&&&&                 &&&&&                 &&&&&       | \n"
" |              &&&&&&&               &&&&&&&               &&&&&&&               &&&&&&&      | \n"
" |                |||                   |||                   |||                   |||        | \n"
" |                                                                                             | \n"
" |                     SUA CASA MODERNA DE MADEIRA ESTA PRONTA!                                | \n"
" |                                APROVEITE MUITO!!!                                           | \n"
" --------------------------------------------------------------------------------------------------- \n"
"\n"
"                                      FIM DE JOGO - PARABENS!                                      \n"
"\n"
"=====================================================================================================\n"
    );   
    }else if(opCompra == 0){
        return;
    }else{
    printf("Opcao invalida\n");
    }
    
}else if(opLoja == 0){
    return;
}else{
    printf("Opcao invalida\n");
}
}

void dormir(){  

    int opDormir;
    printf("===================================\n1-Dormir\n0-Sair\n");
    scanf("%d",&opDormir);

    if (opDormir == 1){//Ainda sem a função de acrescentar o um dia, progesso de plantação e reinicio de pescas disponiveis.
    printf("=========================\n"
           "          CAMA           \n"
           "=========================\n"
           "+------------+\n"
           "|   Z z      |\n"
           "|    O       |\n"
           "|   /|\\__    |\n"
           "|   / \\      |\n"
           "+------------+\n");
    printf("=========================\n");
    printf("+----------------------+\n"
           "|      \\   |   /       |\n"
           "|        .---.         |\n"
           "|    -- (* ^ *) --     |\n"
           "|        `---'         |\n"
           "|      /   |   \\       |\n"
           "+----------------------+\nO Sol nasce em mais um dia lindo!!!\n=========================");
    
} else if (opDormir == 0) {
    return;
}else{
    printf("Opcao invalida");
}        
}
int main()
{
    char nomePersonagem[100], nomeFazenda[100];
    int opLUGAR;
    printf("------------------------------------------------------------------\n");
    printf("                         Sitio dos sonhos!\n");
    printf("------------------------------------------------------------------\n\nDigite o seu nome: ");
    scanf("%s", nomePersonagem);
    printf("Digite o nome da sua Fazenda: ");
    scanf("%s", nomeFazenda);
    printf(
"\n============================================================\n"
"                       FAZENDA %s\n"
"============================================================\n"
"\n"
"       ~~~~~~                                  +------------+\n"
"    ~~~~~~~~~~~~                               |    LOJA    |\n"
"   ~~~  LAGO  ~~~                              |     $      |\n"
"    ~~~ ><> ~~~~                               +-----+------+\n"
"      ~~~~~~~                                        |\n"
"                                                     |\n"
"                                                     |\n"
"                          +--------------------------+\n"
"                          |\n"
"                    +-----+-----+\n"
"                    |    CASA   |\n"
"                    |     /\\    |\n"
"                    |    /__\\   |\n"
"                    |    |  |   |\n"
"                    +-----+-----+\n"
"                          |\n"
"                          |\n"
"                    +-----+-----+\n"
"                    |  CELEIRO  |\n"
"                    |     /\\    |\n"
"                    |    /__\\   |\n"
"                    |    |[]|   |\n"
"                    +-----+-----+\n"
"                          |\n"
"                          |\n"
"          +---------------+----------------+\n"
"          |                                |\n"
"          |           PLANTACAO            |\n"
"          |                                |\n"
"          |      # # # # # # # # # #       |\n"
"          |      # # # # # # # # # #       |\n"
"          |      # # # # # # # # # #       |\n"
"          |      # # # # # # # # # #       |\n"
"          |                                |\n"
"          +--------------------------------+\n"
"\n"
"============================================================\n",
nomeFazenda
);
    printf("\n\n1-Casa\n2-Lago\n3-Plantacao\n4-Celeiro\n5-Loja\n6-Dormir\nEscolha o lugar que voce quer ir: ");
    scanf("%d", &opLUGAR);
    switch(opLUGAR){
        case 1:
        casa(nomePersonagem, nomeFazenda);
        break;

        case 2:
        lago();
        break;

        case 3:
        plantacao();
        break;

        case 4:
        celeiro();
        break;

        case 5:
        loja();
        break;

        case 6:
        dormir();
        break;
    }
}
