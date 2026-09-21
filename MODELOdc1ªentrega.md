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

## Regras e sistema econômico

A pesca vai ter um limite de três pescarias por dia. Cada peixe poderá ser vendido por R$ 20,00.

A plantação terá três espaços. Cada semente custa R$ 10,00. Cada planta colhida poderá ser vendida por R$ 100,00. O crescimento de cada planta leva três dias, o dia do plantio contará como o primeiro dia do ciclo.

A progressão econômica foi planejada para dois ciclos completos de plantação e pesca:

* Dinheiro inicial: R$ 100,00;
* 18 peixes × R$ 20,00 = R$ 360,00;
* 6 plantas × R$ 100,00 = R$ 600,00;
* 6 sementes × R$ 10,00 = R$ 60,00;
* Total final: R$ 1.000,00.

O projeto será desenvolvido de forma incremental, permitindo que as funcionalidades sejam implementadas, testadas e integradas por etapas. Os principais incrementos são:

1. Estrutura básica e menu principal;
2. Casa e passagem dos dias;
3. Sistema de pesca;
4. Sistema de plantação;
5. Loja e sistema econômico;
6. Curral.

O projeto será executado exclusivamente em terminal e desenvolvido em C. Serão utilizados conceitos da disciplina, como variáveis, tipos de dados, estruturas condicionais, estruturas de repetição, funções, vetores e/ou `struct`.

Não fazem parte desta versão sistemas de energia ou stamina, combate, inimigos, multiplayer, contas ou login, conexão com a internet, banco de dados, gráficos 2D ou 3D, interface gráfica, clima, estações do ano, missões, NPCs complexos, criação de animais, produção de leite, venda de produtos das vacas, ferramentas com melhorias, níveis, experiência ou salvamento online.

---
