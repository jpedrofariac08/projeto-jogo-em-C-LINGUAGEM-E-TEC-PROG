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

## 2. Fluxo de Utilização Esperado para o Sistema

 1.⁠ ⁠Ao iniciar o programa, o sistema solicitará o nome do personagem.

 2.⁠ ⁠O nome informado será armazenado na variável ⁠ nomePersonagem ⁠.

 3.⁠ ⁠Em seguida, o sistema solicitará o nome da fazenda.

 4.⁠ ⁠O nome informado será armazenado na variável ⁠ nomeFazenda ⁠.

 5.⁠ ⁠O sistema inicializará a partida com:
   - Dia = 1;
   - Dinheiro = R$ 100,00;
   - Casa = simples;
   - Peixes = 0;
   - Sementes = 0;
   - Plantas = 0;
   - Tentativas de pesca no dia = 0;
   - 3 espaços de plantação vazios;
   - Crescimento das plantas registrado individualmente.

 6.⁠ ⁠Após a inicialização, será exibido o menu principal com as opções:
   - 1 Casa
   - 2 Rio
   - 3 Plantação
   - 4 Curral
   - 5 Loja
   - 6 Dormir
   - 0 Sair

 7.⁠ ⁠O sistema solicitará ao jogador qual opção deseja acessar.

 8.⁠ ⁠Caso seja escolhida a opção *1 — Casa*, o sistema exibirá:
   - Nome do personagem;
   - Nome da fazenda;
   - Dia atual;
   - Dinheiro;
   - Casa atual;
   - Inventário.

 9.⁠ ⁠Na Casa, o sistema verificará se o jogador possui pelo menos R$ 1.000,00.

10.⁠ ⁠Caso não possua o valor necessário, será exibida uma mensagem informando que o dinheiro é insuficiente para comprar a casa melhor e o jogador retornará ao menu principal.

11.⁠ ⁠Caso possua R$ 1.000,00 ou mais, o sistema perguntará se deseja comprar a casa melhor.

12.⁠ ⁠Se a compra for realizada:
   - R$ 1.000,00 será retirado do dinheiro;
   - A casa atual será alterada para a casa melhor;
   - A compra será confirmada;
   - Será exibida a mensagem de vitória;
   - O jogo será encerrado.

13.⁠ ⁠Caso seja escolhida a opção *2 — Rio*, o sistema permitirá realizar uma pescaria.

14.⁠ ⁠Antes da pesca, será verificado se ⁠ tentativasPescaDia ⁠ é menor que 3.

15.⁠ ⁠Caso o limite de três pescarias já tenha sido atingido, o sistema informará que o limite diário foi alcançado e retornará ao menu principal.

16.⁠ ⁠Caso ainda exista uma tentativa disponível:
   - Será pescado um peixe;
   - ⁠ peixes ⁠ será incrementado em 1;
   - ⁠ tentativasPescaDia ⁠ será incrementado em 1;
   - Será exibida uma mensagem informando a captura;
   - O jogador retornará ao menu principal.

17.⁠ ⁠Caso seja escolhida a opção *3 — Plantação*, o sistema exibirá os três espaços e seus respectivos estados.

18.⁠ ⁠O jogador poderá escolher entre:
   - Visualizar;
   - Plantar;
   - Colher.

19.⁠ ⁠Para plantar, o sistema verificará se existe espaço disponível.

20.⁠ ⁠Caso não exista espaço disponível, será exibida uma mensagem informando que não existem espaços disponíveis.

21.⁠ ⁠Caso exista espaço, o sistema verificará se o jogador possui sementes.

22.⁠ ⁠Caso não possua sementes, será exibida uma mensagem informando que é necessário comprar sementes na Loja.

23.⁠ ⁠Caso possua sementes:
   - Uma semente será consumida;
   - O espaço será ocupado;
   - O plantio será registrado;
   - O crescimento da planta será iniciado.

24.⁠ ⁠Cada planta terá seu crescimento controlado individualmente por três dias.

25.⁠ ⁠Para colher, o jogador deverá selecionar uma planta que esteja plantada.

26.⁠ ⁠O sistema verificará se a planta está pronta.

27.⁠ ⁠Caso ainda não esteja pronta, será exibida uma mensagem informando que a planta ainda não pode ser colhida.

28.⁠ ⁠Caso esteja pronta:
   - A planta será colhida;
   - ⁠ plantas ⁠ será incrementado em 1;
   - O espaço será liberado;
   - O sistema informará que a planta poderá ser vendida na Loja.

29.⁠ ⁠Caso seja escolhida a opção *4 — Curral*, o jogador poderá escolher uma interação com as vacas.

30.⁠ ⁠As opções de interação serão:
   - Acariciar;
   - Alimentar.

31.⁠ ⁠Essas ações exibirão mensagens de interação, mas não alterarão dinheiro, inventário, preços, peixes, plantas, dia, crescimento ou condição de vitória.

32.⁠ ⁠Caso seja escolhida a opção *5 — Loja*, será exibido o menu:
   - 1. Comprar sementes;
   - 2. Vender peixes;
   - 3. Vender plantas;
   - 0. Voltar.

33.⁠ ⁠Ao escolher *1 — Comprar sementes*, o sistema solicitará a quantidade desejada.

34.⁠ ⁠A quantidade deverá ser maior que zero.

35.⁠ ⁠O sistema calculará o valor da compra:

   ⁠ quantidade × R$ 10,00 ⁠

36.⁠ ⁠Será verificado se o jogador possui dinheiro suficiente.

37.⁠ ⁠Caso não possua dinheiro suficiente, será exibida uma mensagem e o jogador retornará à Loja.

38.⁠ ⁠Caso possua dinheiro suficiente:
   - O valor da compra será descontado;
   - A quantidade de sementes será adicionada;
   - A compra será confirmada;
   - O jogador retornará à Loja.

39.⁠ ⁠Ao escolher *2 — Vender peixes*, o sistema verificará se existem peixes disponíveis.

40.⁠ ⁠Caso não existam peixes, será exibida uma mensagem informando que não há peixes para vender.

41.⁠ ⁠Caso existam peixes, o sistema solicitará a quantidade desejada.

42.⁠ ⁠A quantidade deverá ser maior que zero e menor ou igual à quantidade de peixes disponíveis.

43.⁠ ⁠Caso a quantidade seja inválida, o sistema informará o erro e retornará à Loja.

44.⁠ ⁠Caso seja válida, o sistema calculará:

   ⁠ quantidade × R$ 20,00 ⁠

45.⁠ ⁠O valor será adicionado ao dinheiro e a quantidade de peixes vendida será retirada do inventário.

46.⁠ ⁠Ao escolher *3 — Vender plantas*, o sistema verificará se existem plantas disponíveis.

47.⁠ ⁠Caso não existam plantas, será exibida uma mensagem informando que não há plantas para vender.

48.⁠ ⁠Caso existam plantas, o sistema solicitará a quantidade desejada.

49.⁠ ⁠A quantidade deverá ser maior que zero e menor ou igual à quantidade de plantas disponíveis.

50.⁠ ⁠Caso a quantidade seja inválida, o sistema informará o erro e retornará à Loja.

51.⁠ ⁠Caso seja válida, o sistema calculará:

   ⁠ quantidade × R$ 100,00 ⁠

52.⁠ ⁠O valor será adicionado ao dinheiro e a quantidade de plantas vendida será retirada do inventário.

53.⁠ ⁠Caso seja escolhida a opção *6 — Dormir*, o sistema encerrará o dia atual.

54.⁠ ⁠Ao dormir:
   - ⁠ dia ⁠ será incrementado em 1;
   - ⁠ tentativasPescaDia ⁠ será zerado;
   - O crescimento das plantas será atualizado.

55.⁠ ⁠Para cada planta existente, seu crescimento será incrementado e será verificado se atingiu três dias.

56.⁠ ⁠Caso o crescimento seja igual ou superior a três dias, a planta será marcada como pronta para colheita.

57.⁠ ⁠Caso ainda não tenha atingido três dias, a planta continuará crescendo.

58.⁠ ⁠O dia do plantio será considerado como o primeiro dia do ciclo de crescimento.

59.⁠ ⁠Pescar, plantar, colher e realizar operações na Loja não fazem o dia avançar.

60.⁠ ⁠Caso seja escolhida a opção *0 — Sair*, o programa será encerrado.

61.⁠ ⁠Sair do programa não representa uma vitória.

62.⁠ ⁠Caso o usuário informe uma opção inexistente no menu, o sistema exibirá uma mensagem de opção inválida e retornará ao menu principal.

---

## 3. Fluxograma da Lógica do Sistema

O fluxograma representa a lógica de funcionamento do sistema desde a inicialização da partida até o encerramento do jogo.

Ele apresenta:

- Entrada do nome do personagem;
- Entrada do nome da fazenda;
- Inicialização das variáveis;
- Menu principal;
- Acesso à Casa;
- Sistema de pesca;
- Sistema de plantação;
- Interações do Curral;
- Sistema da Loja;
- Passagem dos dias;
- Verificação da compra da casa melhor;
- Condição de vitória;
- Opção de saída;
- Tratamento de opções inválidas.

### Fluxograma Principal

[fluxograma detalhado](./fluxogramadetalhado-FINAL.pdf)

---

## 4. Estrutura de Dados

O sistema utilizará variáveis para armazenar e controlar as informações necessárias durante a execução do jogo.

As principais variáveis serão:

```c
char nomePersonagem[100];
char nomeFazenda[100];

int dia;
float dinheiro;
int casaAtual;

int sementes;
int peixes;
int plantas;

int tentativasPescaDia;

int espacosPlantacao[3];
int crescimento[3];

O fluxograma também está disponível em formato PDF no repositório do projeto.

