# 🏦 Sistema de Gerenciamento Bancário

![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)
![Framework](https://img.shields.io/badge/framework-Qt-green.svg)
![Database](https://img.shields.io/badge/database-SQLite-orange.svg)
![License](https://img.shields.io/badge/license-MIT-lightgrey.svg)

<p align="center">
  Um sistema desktop para simulação de operações bancárias, desenvolvido com C++ e o framework Qt.
</p>

---

## 📋 Sobre o Projeto

Este projeto é um sistema de gerenciamento bancário que permite realizar as operações mais comuns de uma agência. A aplicação foi construída utilizando **C++** e o framework **Qt** para a interface gráfica, e se conecta a um banco de dados **SQLite** para persistir as informações de clientes e contas.

O sistema é focado na gestão de clientes e suas respectivas contas bancárias, oferecendo uma interface intuitiva para cadastro, consulta e transações financeiras.

---

## ✨ Funcionalidades Principais

A aplicação conta com um conjunto robusto de funcionalidades para a administração de um banco:

### Gerenciamento de Clientes
-   **Cadastro de Clientes**: Permite registrar novos clientes no sistema.
-   **Edição de Dados**: Funcionalidade para atualizar as informações de clientes já cadastrados.
-   **Consulta e Listagem**: Tela para listar todos os clientes e consultar informações detalhadas de cada um.

### Operações com Contas
-   **Diferentes Tipos de Conta**: O sistema suporta a criação de múltiplos tipos de contas, como `ContaCorrente`, `ContaEspecial` e `ContaMaster`.
-   **Depósitos**: Realização de depósitos em contas existentes.
-   **Saques**: Efetuação de saques, respeitando as regras de cada tipo de conta.
-   **Transferências**: Transferência de valores entre contas cadastradas.

### Relatórios
-   **Geração de Relatórios**: O sistema possui uma funcionalidade para gerar relatórios, consolidando as informações dos clientes e contas.

---

## 🛠️ Tecnologias Utilizadas

| Tecnologia | Descrição |
| :--- | :--- |
| **C++** | Linguagem principal utilizada para toda a lógica de negócio e regras do sistema. |
| **Qt** | Framework utilizado para a criação de todas as interfaces gráficas (`.ui`) e gerenciamento de eventos. |
| **SQLite** | Sistema de banco de dados leve, utilizado para armazenar os dados na pasta `bancoDeDados`. |
| **Qt Creator** | IDE recomendada para compilar, depurar e executar o projeto. |

---

## 🚀 Como Executar

Siga os passos abaixo para compilar e executar o projeto localmente.

### Pré-requisitos
-   **Qt 6 ou superior**: [Link para download do Qt](https://www.qt.io/download)
-   **Compilador C++** (MinGW no Windows, GCC no Linux ou Clang no macOS)
-   **Qt Creator** (instalado junto com o Qt).

### Passos
1.  **Clone o repositório:**
    ```bash
    git clone [https://github.com/ViniiGabriel/bancoQT.git](https://github.com/ViniiGabriel/bancoQT.git)
    ```
2.  **Abra o projeto no Qt Creator:**
    -   Abra o Qt Creator.
    -   Vá em `File > Open File or Project...`.
    -   Navegue até a pasta clonada e selecione o arquivo `bancoComBDeQT.pro`.
3.  **Configure o Kit de Compilação:**
    -   O Qt Creator deve detectar automaticamente os kits instalados. Selecione um kit compatível (ex: `Desktop_Qt_6_7_1_MinGW_64_bit`).
4.  **Verifique o Banco de Dados:**
    -   Certifique-se de que a pasta `bancoDeDados` existe e contém o arquivo de banco de dados necessário para a execução.
5.  **Compile e Execute:**
    -   Clique no botão **Build** (ícone de martelo) ou pressione `Ctrl+B`.
    -   Clique no botão **Run** (ícone de play verde) ou pressione `Ctrl+R`.

---

## 📂 Estrutura do Projeto

A estrutura de arquivos foi organizada para separar a lógica de cada funcionalidade do sistema.

| Componente | Descrição |
| :--- | :--- |
| 📂 `bancoDeDados/` | Contém o arquivo do banco de dados SQLite. |
| 📜 `*.pro` | Arquivo de configuração do projeto Qt. |
| 📜 `main.cpp` | Ponto de entrada da aplicação, onde a tela inicial é carregada. |
| 📜 `telainicial.*` | Arquivos da tela principal da aplicação. |
| 📜 `cadastrocliente.*` | Telas e lógica para o cadastro de novos clientes. |
| 📜 `listaclientes.*` | Interface para listar os clientes cadastrados. |
| 📜 `(conta*.cpp/.h)` | Classes que definem os diferentes tipos de contas (`ContaCorrente`, `ContaEspecial`, etc.). |
| 📜 `tela(deposito/saque/transferencia).*` | Telas e lógicas para as operações financeiras. |

---

<p align="center">
  Feito com dedicação por ViniiGabriel
</p>
