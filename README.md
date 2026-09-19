# Projeto do jogo em C LINGUAGEM-E-TEC-PROG

## 1. Identificação do Projeto

**Instituição:** Unicesumar – Maringá  
**Curso:** ESOFT  
**Disciplina:** Linguagem e técnicas de programação  
**Projeto:** Jogo de Fazendinha em Terminal  
**Linguagem:** C

### Integrantes

- João Pedro De Faria. RA: 260018572
- Felipe de Morais Mayo. RA: 260088452
- Gustavo Ribeiro
- Daniel Eberharte. RA: 260086482

---

## 2. Descrição do Projeto

O projeto consiste no desenvolvimento de um jogo de fazendinha executado no terminal, no qual o jogador controla um personagem que vive e trabalha em uma pequena propriedade rural herdada de seu pai.

O objetivo principal é conseguir dinheiro por meio das atividades realizadas na fazenda e, ao final de dois ciclos completos de produção, comprar uma casa melhor.

O jogador poderá explorar quatro locais principais:

- 🏠 **Casa**
- 🎣 **Rio**
- 🌱 **Plantação**
- 🐄 **Curral**

A casa será utilizada principalmente para consultar informações e dormir, fazendo o dia avançar. No rio, o jogador poderá pescar e obter peixes para vender. Na plantação, poderá plantar, acompanhar o crescimento e colher produtos para venda. O curral terá uma função exclusivamente interativa, permitindo alimentar e acariciar as vacas, sem interferência na economia ou no progresso financeiro do jogo.

---

## 3. Objetivo do Jogo

O jogador começa com uma quantia inicial de **R$ 100,00** e deve administrar suas atividades para chegar a **R$ 1.000,00**.

Ao alcançar esse valor, poderá comprar a casa melhor e concluir o jogo.

A progressão foi planejada para que o objetivo seja alcançado ao longo de **dois ciclos completos de plantação e pesca**.

---

## 4. Regras Principais

### 🎣 Pesca

- O jogador pode pescar no máximo **3 vezes por dia**.
- Cada peixe obtido possui valor de venda.
- Os peixes ficam disponíveis para venda.
- A pesca pode ser realizada no mesmo dia em que o jogador realiza atividades na plantação.

### 🌱 Plantação

- Existem **3 espaços de plantação**.
- Cada semente custa **R$ 10,00**.
- Cada planta colhida pode ser vendida por **R$ 100,00**.
- Um ciclo de plantação possui duração de **3 dias**.
- O jogador poderá realizar as atividades da plantação e pescar no mesmo dia.

### 🐄 Curral

- O jogador poderá visitar o curral.
- Poderá alimentar e acariciar as vacas.
- As vacas não geram dinheiro nem produtos.
- As ações do curral não interferem na economia do jogo, é apenas uma ambientação para a fazenda.

### 😴 Passagem dos dias

- O jogador pode dormir na casa para encerrar o dia.
- Ao dormir, o dia seguinte começa.
- O limite diário de pesca é renovado.
- O crescimento das plantações é atualizado.

---

## 5. Sistema Econômico

O sistema econômico foi definido para que o jogador consiga atingir o valor necessário para comprar a casa melhor ao completar os dois ciclos.

### Dinheiro inicial

**R$ 100,00**

### Pesca

- 3 pescarias por dia
- 6 dias nos dois ciclos
- Total máximo: **18 peixes**
- Valor de cada peixe: **R$ 20,00**

**18 × R$ 20,00 = R$ 360,00**

### Plantação

Em cada ciclo:

- 3 sementes
- R$ 10,00 por semente
- 3 plantas colhidas
- R$ 100,00 por planta

Nos dois ciclos:

- 6 sementes compradas = **R$ 60,00**
- 6 plantas vendidas = **R$ 600,00**

Lucro da plantação:

**R$ 600,00 − R$ 60,00 = R$ 540,00**

### Resultado final

| Item | Valor |
|---|---:|
| Dinheiro inicial | R$ 100,00 |
| Venda dos peixes | + R$ 360,00 |
| Venda das plantações | + R$ 600,00 |
| Compra das sementes | − R$ 60,00 |
| **Total final** | **R$ 1.000,00** |

### 🏡 Casa melhor

**Preço: R$ 1.000,00**

Ao comprar a casa melhor, o jogador conclui o objetivo principal e o jogo termina.

---

## 6. Processo de Desenvolvimento

O projeto utilizará um **modelo de desenvolvimento incremental**.

Nesse modelo, o sistema não é desenvolvido completamente de uma única vez. O jogo será construído por etapas, e cada nova etapa adicionará funcionalidades ao que já foi implementado anteriormente.

A escolha desse modelo é adequada porque o jogo é formado por diferentes módulos relativamente independentes, como pesca, plantação, loja, curral, passagem de dias e compra da casa. Dessa forma, cada parte poderá ser implementada, testada e posteriormente integrada ao restante do programa.

### 6.1 Incrementos previstos

#### Incremento 1 — Estrutura básica

- criação do programa principal;
- entrada do nome do personagem;
- entrada do nome da fazenda;
- inicialização das variáveis;
- criação do menu principal;
- navegação entre as opções.

#### Incremento 2 — Casa e passagem dos dias

- criação da área da Casa;
- exibição das informações do jogador;
- implementação da opção Dormir;
- atualização do dia;
- reinicialização do limite diário de pesca.

#### Incremento 3 — Sistema de pesca

- criação da área do Rio;
- implementação da pesca;
- limite de 3 pescarias por dia;
- armazenamento dos peixes no inventário.

#### Incremento 4 — Sistema de plantação

- implementação dos 3 espaços de plantação;
- uso de sementes;
- plantio;
- controle do crescimento;
- colheita;
- armazenamento das plantas colhidas.

#### Incremento 5 — Loja e economia

- compra de sementes;
- venda de peixes;
- venda de plantas;
- atualização do dinheiro;
- validação das quantidades disponíveis.

#### Incremento 6 — Curral

- interação com as vacas;
- opção de alimentar;
- opção de acariciar;
- mensagens de interação sem efeitos econômicos.

# 7. Delimitação do Escopo

O projeto **Vida na Fazenda** consiste no desenvolvimento de um jogo de simulação rural executado em terminal, utilizando a linguagem **C**. O jogador poderá personalizar a partida escolhendo o **nome do personagem** e o **nome da fazenda** antes do início do jogo.

A experiência será organizada por meio de um **menu principal**, a partir do qual o jogador poderá acessar diferentes áreas da fazenda. Entre elas estarão a **Casa**, o **Rio**, a **Plantação**, o **Curral** e a **Loja**, além da opção de **Dormir**, responsável pela passagem dos dias.

Na **Casa**, o jogador poderá consultar informações da partida, como dinheiro disponível, dia atual, inventário, nome do personagem, nome da fazenda e situação da moradia. Esse também será o local onde poderá adquirir uma casa melhor ao atingir o valor necessário.

No **Rio**, será implementado o sistema de pesca, permitindo que o jogador realize até **três pescarias por dia**. Cada pescaria resultará em um peixe, que será armazenado no inventário e poderá ser vendido posteriormente na Loja.

A **Plantação** possuirá **três espaços disponíveis** para cultivo. O jogador poderá utilizar sementes compradas na Loja, plantar, acompanhar o crescimento das plantas ao longo dos dias e realizar a colheita quando estiverem prontas. Os produtos colhidos serão armazenados no inventário e também poderão ser vendidos.

O **Curral** terá uma função de interação e ambientação. Nesse local, o jogador poderá alimentar e acariciar as vacas, sem que essas ações alterem a economia ou a progressão principal da partida.

A **Loja** concentrará as atividades comerciais do jogo. Nela, o jogador poderá comprar sementes e vender os peixes e plantas armazenados no inventário. Todas as operações deverão atualizar corretamente o saldo e as quantidades de itens disponíveis.

O jogo também contará com um **sistema de dias**. A passagem do tempo ocorrerá somente quando o jogador escolher a opção **Dormir**. Ao iniciar um novo dia, o limite de pesca será renovado e o crescimento das plantações será atualizado.

A progressão principal será baseada na obtenção e administração de dinheiro por meio da pesca e da agricultura. O jogador começará com **R$ 100,00** e deverá alcançar **R$ 1.000,00** para comprar uma casa melhor. A compra da nova casa representará a **condição de vitória** e encerrará a partida.

O projeto também utilizará **Git e GitHub** para controle de versão e acompanhamento do desenvolvimento incremental realizado pelos integrantes do grupo.

---

## 7.1 Dentro do escopo

O jogo deverá possuir:

- execução em terminal;
- desenvolvimento em linguagem C;
- escolha do nome do personagem;
- escolha do nome da fazenda;
- menu principal;
- Casa;
- Rio;
- Plantação;
- Curral;
- Loja;
- sistema de pesca;
- limite de 3 pescarias por dia;
- inventário de peixes;
- compra de sementes;
- 3 espaços de plantação;
- crescimento de plantas;
- colheita;
- inventário de plantas;
- compra e venda de itens;
- sistema de dinheiro;
- sistema de dias;
- opção Dormir;
- compra da casa melhor;
- condição de vitória;
- opção de sair do jogo;
- validação das principais entradas.

---

## 7.2 Fora do escopo

Não serão implementados nesta versão:

- sistema de energia ou stamina;
- combate;
- inimigos;
- multiplayer;
- sistema de contas ou login;
- conexão com a internet;
- banco de dados;
- gráficos 2D ou 3D;
- interface gráfica;
- sistema de clima;
- estações do ano;
- missões;
- NPCs complexos;
- criação de animais;
- produção de leite ou outros produtos pelo curral;
- venda de produtos provenientes das vacas;
- ferramentas com melhorias;
- sistema de níveis;
- experiência;
- salvamento online.

---

Essa delimitação foi definida para manter o projeto **viável dentro do tempo disponível** e **compatível com o conteúdo da disciplina**.

---

## 7. Dados Principais

Durante a execução do jogo serão necessários dados para representar:

- Dinheiro do jogador;
- Dia atual;
- Quantidade de peixes pescados no dia;
- Peixes armazenados;
- Sementes;
- Plantações;
- Estado de crescimento das plantações;
- Quantidade de vacas;
- Estado da casa atual.

---

  
