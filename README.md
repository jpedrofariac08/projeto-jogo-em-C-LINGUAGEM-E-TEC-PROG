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
- Daniel

---

## 2. Descrição do Projeto

O projeto consiste no desenvolvimento de um jogo de fazendinha executado no terminal, no qual o jogador controla um personagem que vive e trabalha em uma pequena propriedade rural.

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
