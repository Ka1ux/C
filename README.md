# Projetos em C

Este repositório reúne **5 mini-projetos em C** desenvolvidos para atividades acadêmicas.  
Cada pasta corresponde a um projeto independente com objetivos específicos.

Atualmente:  
- **Completos:** Atividade1, Atividade2, Atividade3, Atividade4, Numero_maior  

---

## Estrutura do Repositório

```text
C/
├── Atividade1/        # Variação de preço
├── Atividade2/        # Calculadora de IMC
├── Atividade3/        # Monitoramento de carros no pedágio
├── Atividade4/        # Ordenação de preços com Bubble Sort
├── Numero_maior/      # Programa para encontrar o maior número
└── README.md
```

## 📌 Projetos

### 💰 Atividade1 – Analisador de Variação de Preços

- **Status:** ✅ Completo
- **Descrição:** Programa em C que analisa a variação de preços de **3 produtos**, calcula a variação percentual e classifica a situação do preço.
- **Funcionalidades:**
   - Lê nome, preço anterior e preço atual de cada produto
   - Calcula a variação: ((preço_atual - preço_anterior) / preço_anterior) * 100
- Classifica a situação:
    - 10% → **AUMENTO ABUSIVO**
    - 0–10% → **AUMENTO**
    - <0 → **QUEDA**
    - =0 → **ESTÁVEL**
-Exibe relatório para cada produto
```
----------------------------------
Analisando Produto 1 de 3
----------------------------------
Digite o nome do produto: Arroz
Digite o preço anterior (R$): 20
Digite o preço atual (R$): 22

Resumo de variação de Preços:
Produto: Arroz
Preço Anterior: R$20.00
Preço Atual: R$22.00
Variação: 10.00%
Situação: AUMENTO
----------------------------------
---
```

### 🏋️ **Atividade2 – Calculadora de IMC**
- **Status:** ✅ Completo  
- **Descrição:** Calcula o **IMC (Índice de Massa Corporal)** de um ou mais usuários, exibe a classificação e calcula a média geral.  
- **Funcionalidades:**  
  - Recebe peso e altura do usuário  
  - Calcula o IMC: `IMC = peso / (altura * altura)`  
  - Classifica o IMC:  
    - <18.5 → **Abaixo do peso**  
    - 18.5–24.9 → **Peso normal**  
    - 25–29.9 → **Sobrepeso**  
    - ≥30 → **Obesidade**  
  - Permite repetir o cálculo para múltiplos usuários  
  - Mostra a **média geral dos IMCs**
    
**Exemplo de uso:**
```
=== Calculadora de IMC ===
Digite o peso em kg: 70
Digite a altura em metros: 1.75
IMC: 22.86
Classificacao: Peso normal

Deseja calcular o IMC de outro usuario? (s/n): n
Media geral dos IMCs: 22.86
=== Fim do programa ===
```

---

### 🚗 **Atividade3 – Monitoramento de carros no pedágio**
- **Status:** ✅ Completo  
- **Descrição:** Programa que registra a quantidade de carros que passam pelo pedágio por dia e permite analisar os dados através de um **menu interativo**.  
- **Funcionalidades:**  
  - Inserir a quantidade de carros de cada dia  
  - Exibir quantidade de carros por dia  
  - Mostrar qual dia teve mais carros  

**Exemplo de uso:**
```
=== Menu ===
1. Inserir quantidade de carros do dia
2. Mostrar quantidade de carros por dia
3. Mostrar dia com mais carros
4. Sair

Escolha uma opcao: 1
Digite o numero do dia: 1
Digite quantos carros passaram neste dia: 120

Escolha uma opcao: 2
Dia 1: 120 carros

Escolha uma opcao: 3
O dia com mais carros foi: Dia 1 com 120 carros
```

---

### 💰 **Atividade4 – Ordenação de preços**
- **Status:** ✅ Completo  
- **Descrição:** Solicita **10 preços de produtos** do usuário e ordena em **ordem crescente e decrescente** usando Bubble Sort.  

**Exemplo de uso:**
```
Digite os precos de 10 produtos:
Preco do produto 1: 15.5
Preco do produto 2: 9.99
...
Precos originais: 15.50 9.99 20.00 5.00 ...
Precos em ordem crescente: 3.00 5.00 7.50 9.99 ...
Precos em ordem decrescente: 20.00 18.00 15.50 ...
```

---

### 🔢 **Numero_maior**
- **Status:** ✅ Completo  
- **Descrição:** Solicita **5 números inteiros** do usuário e retorna o **maior número** digitado.  
- **Funcionalidades:**  
  - Recebe 5 números do usuário  
  - Percorre o vetor para encontrar o maior valor  
  - Exibe o maior número  

**Exemplo de uso:**
```
Digite um numero: 4
Digite um numero: 15
Digite um numero: 9
Digite um numero: 3
Digite um numero: 12

O maior numero digitado foi: 15
```
---
