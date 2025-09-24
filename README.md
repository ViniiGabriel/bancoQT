# bancoQT

Sistema bancário desenvolvido em **C++** com interface gráfica em **Qt**.

---

## 🏦 Visão geral

O projeto **bancoQT** é um sistema simples de banco que permite gerenciar clientes, contas correntes, contas especiais e operações como saque, depósito e transferência, tudo isso por meio de uma interface gráfica.

Ele serve como um protótipo educativo ou de estudo, demonstrando integração entre lógica de aplicação em C++ e interface com Qt.

---

## ⚙️ Funcionalidades

- Cadastro de clientes  
- Consulta de clientes  
- Edição de dados de clientes  
- Criação de contas (conta corrente e conta especial)  
- Operações bancárias:  
  - Saque  
  - Depósito  
  - Transferência  
- Interface GUI com formulários e telas para cada operação  

---

## 🛠️ Requisitos e como compilar

### Requisitos

- Qt (versão compatível com qmake)  
- Um compilador C++ (ex: GCC, Clang, MSVC, dependendo do sistema)  
- Ambiente de desenvolvimento configurado para Qt (ex: Qt Creator ou linha de comando)

### Instruções de compilação

1. Clone este repositório:

   git clone https://github.com/ViniiGabriel/bancoQT.git
   cd bancoQT

2. Abra o projeto no Qt Creator usando o arquivo bancoComBDeQT.pro, ou use a linha de comando:

   qmake bancoComBDeQT.pro
   make        # ou mingw32-make no Windows, ou equivalente

3. Execute o executável gerado:

   ./bancoQT   # ou .\bancoQT.exe no Windows

---

Copyright (c) 2025 Vinicius Domingos Gabriel

...
