# 🎯 Jogo de Adivinhação em C

Projeto inicial desenvolvido em **linguagem C** como parte dos meus estudos de programação.
o projeto principal é o jogo de Adivinhação, os demais projetos é somente códigos para fixação e aprendizagem. 

O objetivo do projeto é praticar conceitos fundamentais da linguagem através da criação de um jogo simples de adivinhação, no qual o jogador precisa descobrir um número secreto gerado aleatoriamente pelo computador.

> 📚 Projeto desenvolvido para fins de estudo, prática e evolução na programação.

---

## 🎮 Sobre o projeto

O programa gera um número secreto entre **0 e 99** e desafia o jogador a descobrir qual é esse número.

Antes de começar, o jogador pode escolher entre três níveis de dificuldade:

* 🟢 **Fácil:** 20 tentativasu
* 🟡 **Médio:** 12 tentativas
* 🔴 **Difícil:** 6 tentativas

A cada tentativa, o programa informa se o chute foi:

* Maior que o número secreto;
* Menor que o número secreto;
* Igual ao número secreto.

Quando o jogador acerta, o jogo informa a quantidade de tentativas utilizadas e a pontuação obtida.

---

## 🧠 Conceitos praticados

Este projeto foi desenvolvido para praticar conceitos básicos e importantes da linguagem C.

### Variáveis e tipos de dados

Utilização de diferentes tipos de variáveis:

```c
int chute;
int nivel;
int tentativas;
double pontos;
```

### Entrada de dados

Utilização do `scanf()` para receber informações do usuário:

```c
scanf("%d", &chute);
```

### Estruturas condicionais

Utilização de `if`, `else if` e `else` para controlar as regras do jogo:

```c
if (acertou) {
    break;
}
else if (maior) {
    printf("Seu chute foi maior que o numero secreto!\n");
}
else {
    printf("Seu chute foi menor que o numero secreto!\n");
}
```

### Estrutura de repetição

Utilização do `for` para controlar a quantidade de tentativas:

```c
for(int i = 1; i <= numerodetentativas; i++) {
    // tentativa do jogador
}
```

### `switch case`

Utilizado para definir a quantidade de tentativas de acordo com o nível escolhido:

```c
switch (nivel)
{
case 1:
    numerodetentativas = 20;
    break;

case 2:
    numerodetentativas = 12;
    break;

default:
    numerodetentativas = 6;
    break;
}
```

### Números aleatórios

Utilização das bibliotecas:

```c
#include <stdlib.h>
#include <time.h>
```

O `srand()` é utilizado para inicializar a geração de números aleatórios:

```c
int segundos = time(0);
srand(segundos);
```

E o `rand()` gera o número utilizado como base para o número secreto:

```c
int numerogrande = rand();
int numerosecreto = numerogrande % 100;
```

### Operadores

O projeto também utiliza operadores de:

* Comparação
* Atribuição
* Subtração
* Divisão
* Igualdade

---

## 🏆 Sistema de pontuação

O jogo começa com:

```text
1000 pontos
```

A cada erro, uma quantidade de pontos é descontada com base na distância entre o chute e o número secreto.

Exemplo:

```c
double pontosperdidos = abs(chute - numerosecreto) / (double)2;
pontos = pontos - pontosperdidos;
```



## 🛠️ Tecnologias utilizadas

* **C**
* **GCC**
* **Visual Studio Code**
* **Git**
* **GitHub**

---

## 🖥️ Exemplo de funcionamento

```text
Qual nivel de dificuldade?

(1) Facil (2) Medio (3) Dificil

Escolha: 2

Tentativa 1
Digite o seu chute:
50

Seu chute foi maior que o numero secreto!

Tentativa 2
Digite o seu chute:
25

Seu chute foi menor que o numero secreto!

Tentativa 3
Digite o seu chute:
32

Parabens! Voce ganhou!

Voce acertou em 3 tentativas!
Total de pontos: 987.0
```

---


## 📚 Objetivo de aprendizagem

Este projeto faz parte da minha jornada de aprendizado em programação.

A ideia é começar com projetos simples e, conforme avanço nos estudos, retornar a projetos antigos para aplicar novos conhecimentos e melhorar sua estrutura.

O objetivo não é apenas fazer o programa funcionar, mas também aprender gradualmente conceitos como:

```text
Lógica de programação
       ↓
Linguagem C
       ↓
Estruturas de dados
       ↓
Funções
       ↓
Modularização
       ↓
Arquivos
       ↓
Projetos maiores
```

---

## 🚀 Evolução do projeto

Este projeto representa uma das etapas iniciais dos meus estudos em programação.

Pretendo utilizar projetos como este para acompanhar minha evolução e colocar em prática os conceitos aprendidos durante o curso de **Análise e Desenvolvimento de Sistemas**.

> "Todo projeto começa simples. O importante é continuar evoluindo."

---

## 👨‍💻 Autor

**Victor Camilo**

Estudante de **Análise e Desenvolvimento de Sistemas**, atualmente desenvolvendo conhecimentos em programação, C, Git, GitHub, análise de dados e desenvolvimento de software.

Optei por gastar tempo em aprendizagem em linguagem C , sendo uma linguagem que já é antiga e pouco utilizada, mas que vai me trazer uma base bem solida em Logica de programação, Sintaxe e algoritmos. Com isso, ficará mais "fácil" aprendizagem de outras linguagens de programação 
---

⭐ Projeto desenvolvido para estudos e prática de programação.
