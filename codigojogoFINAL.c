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

void celeiro(){
    int opCeleiro; // Nao ha consumo de itens, sistema de fome ou qualquer outra consequencia no jogo.
    printf(
"==================================\n"
"             CELEIRO              \n"
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
    );
    do{ //Repete o menu do celeiro ate o jogador escolher sair
        printf(
"\n1- Alimentar as vacas\n" //Apenas para ambientacao, gera uma mensagem visual para o jogador.
"2- Acariciar as vacas\n" //Apenas para ambientacao, gera uma mensagem visual para o jogador.
"0- Sair\n"
"Escolha sua acao: "
        );
        scanf("%d", &opCeleiro);

        if (opCeleiro == 1) {
            printf("\nVoce alimentou as vacas. Elas parecem felizes!!\n");
        } else if (opCeleiro == 2) {
            printf("\nVoce acariciou as vacas. Muuuuuu!!\n");
        } else if (opCeleiro != 0) {
            printf("\nOpcao invalida!\n");
        }
    }while(opCeleiro != 0);
}

void loja(int dados[]){
    int opLoja, opVenda, opCompra, quantidade;
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
);
    do{ //Repete o menu da loja ate o jogador sair ou comprar a casa
        printf("\nSeu dinheiro: R$ %d,00\n", dados[0]);
        printf("1- Vender\n2- Comprar\n0- Sair\n==========================================\nEscolha sua acao: ");
        scanf("%d", &opLoja);
        if(opLoja == 1){
            printf("\nEscolha o que deseja vender!!\n1- Peixe: 20,00 (voce tem %d)\n2- Planta: 100,00 (voce tem %d)\n0- Voltar\nEscolha a opcao: ", dados[2], dados[3]);
            scanf("%d", &opVenda);
            if(opVenda == 1){
                if(dados[2] > 0){ //Vende todos os peixes
                    dados[0] = dados[0] + dados[2] * 20;
                    printf("\n%d peixe(s) vendido(s) por R$ %d,00!!\n", dados[2], dados[2] * 20);
                    dados[2] = 0;
                }else{
                    printf("\nVoce nao tem peixes para vender!\n");
                }
            }else if(opVenda == 2){
                if(dados[3] > 0){ //Vende todas as plantas
                    dados[0] = dados[0] + dados[3] * 100;
                    printf("\n%d planta(s) vendida(s) por R$ %d,00!!\n", dados[3], dados[3] * 100);
                    dados[3] = 0;
                }else{
                    printf("\nVoce nao tem plantas para vender!\n");
                }
            }else if(opVenda != 0){
                printf("Opcao invalida\n");
            }
        }else if(opLoja == 2){
            printf("\nEscolha o que deseja comprar!!\n1- Semente: 10,00\n2- CASA NOVA(objetivo final): 1000,00\n0- Voltar\nEscolha a opcao: ");
            scanf("%d", &opCompra);
            if(opCompra == 1){
                do{ //Pede a quantidade ate o jogador digitar um numero valido
                    printf("Quantas sementes deseja comprar? (0 para cancelar): ");
                    scanf("%d", &quantidade);
                    if(quantidade < 0){
                        printf("Quantidade invalida!\n");
                    }
                }while(quantidade < 0);

                if(quantidade > 0){
                    if(quantidade * 10 <= dados[0]){
                        dados[0] = dados[0] - quantidade * 10;
                        dados[1] = dados[1] + quantidade;
                        printf("\nCompra de %d semente(s) efetuada!! Voce pagou R$ %d,00\n", quantidade, quantidade * 10);
                    }else{
                        printf("\nDinheiro insuficiente!\n");
                    }
                }
            }else if(opCompra == 2){ //Objetivo para concluir o jogo, a compra da casa melhor.
                if(dados[0] >= 1000){
                    dados[0] = dados[0] - 1000;
                    dados[6] = 1; //Marca que a casa foi comprada
                    opLoja = 0;   //Sai da loja
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
                    printf("Voce zerou o jogo em %d dia(s)!!\n", dados[4]);
                }else{
                    printf("\nVoce precisa de R$ 1000,00 para comprar a casa nova. Faltam R$ %d,00\n", 1000 - dados[0]);
                }
            }else if(opCompra != 0){
                printf("Opcao invalida\n");
            }
        }else if(opLoja != 0){
            printf("Opcao invalida\n");
        }
    }while(opLoja != 0);
}
