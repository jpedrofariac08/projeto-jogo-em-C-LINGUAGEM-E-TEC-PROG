# Título do Projeto: Vida na Fazenda

## 1. Descrição do Sistema

O projeto consiste no desenvolvimento de um jogo de simulação rural executado em terminal, utilizando a linguagem C. Nele, o jogador controlará um personagem que vive e trabalha em uma pequena propriedade rural herdada de seu pai.
Antes de iniciar a partida, o jogador poderá escolher o nome do personagem e o nome da fazenda. O jogo começará com R$ 100,00, uma casa simples, nenhum peixe, nenhuma semente e nenhuma planta.
O principal objetivo será administrar as atividades da fazenda até alcançar R$ 1.000,00. Ao atingir esse valor, o jogador poderá comprar uma casa melhor. A aquisição da nova casa representará a condição de vitória e encerrará a partida.
O jogador poderá acessar cinco áreas principais da fazenda:

Casa;
Rio;
Plantação;
Curral;
Loja.

Na Casa, será possível consultar informações da partida, como o nome do personagem, o nome da fazenda, o dia atual, o dinheiro disponível, a casa atual e o inventário. Também será possível comprar uma casa melhor quando o jogador possuir R$ 1.000,00.
O Rio será destinado ao sistema de pesca. O jogador poderá pescar no máximo três vezes por dia, e cada pescaria resultará na obtenção de um peixe. Posteriormente, esses peixes poderão ser vendidos na Loja.
A Plantação contará com três espaços disponíveis. O jogador poderá comprar sementes, plantá-las, acompanhar o crescimento das plantas e realizar a colheita quando elas estiverem prontas. Cada planta terá seu crescimento controlado individualmente.
O Curral terá uma função exclusivamente interativa e de ambientação. O jogador poderá alimentar e acariciar as vacas, mas essas ações não modificarão o dinheiro, o inventário, os preços, a quantidade de peixes, as plantas, o dia, o crescimento das plantações ou a condição de vitória.
A Loja será responsável pelas operações econômicas do jogo. Nela, o jogador poderá comprar sementes e vender os peixes e as plantas armazenados no inventário.
A passagem dos dias ocorrerá somente quando o jogador escolher a opção “Dormir”. Ao dormir, o dia será incrementado, o limite diário de pesca será renovado e o crescimento das plantações será atualizado.
