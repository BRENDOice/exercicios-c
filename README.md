# Sistema de Triagem e Consulta para Alistamento Militar

## 📝 Descrição Geral
O **Sistema de Triagem e Consulta para Alistamento Militar** é uma aplicação em linha de comando (CLI) desenvolvida em linguagem C. O projeto simula o atendimento preliminar ao cidadão brasileiro interessado em serviços militares, aplicando regras de negócio baseadas em faixa etária para direcionar o usuário aos fluxos adequados: prosseguimento para acompanhamento e opções de alistamento (maiores de 18 anos), aguardo de janela de liberação (17 anos) ou bloqueio por inelegibilidade temporária (menores de 17 anos).

## 🚀 Tecnologias Utilizadas
- **Linguagem de Programação:** C (compatível com padrões C99/C11/C17).
- **Bibliotecas Padrão:** `<stdio.h>` (operações de entrada/saída).
- **Compiladores Homologados:** GCC (GNU Compiler Collection), Clang, MSVC.
- **Estruturas de Dados:** Tipos primitivos inteiros (`int`) e vetores contíguos de caracteres (`char[]` / strings estáticas).

## ⚙️ Funcionalidades Principais
- **Controle de Sessão Inicial:** Confirmação explícita de interesse do usuário antes de iniciar a coleta de dados cadastrais.
- **Validação de Entrada de Controle:** Interrupção segura do fluxo caso a opção inicial receba um valor não numérico.
- **Captura de Dados Pessoais:** Coleta do prenome e idade do cidadão.
- **Validação de Regra de Negócio Etária:**
  - **Maior ou igual a 18 anos:** Acesso concedido ao menu de serviços.
  - **Exatamente 17 anos:** Notificação de prontidão para futuro alistamento.
  - **Abaixo de 17 anos:** Notificação de indisponibilidade por idade insuficiente.
- **Menu de Serviços Específicos (≥ 18 anos):**
  - Opção 1: Acompanhamento de Alistamento Militar.
  - Opção 2: Acompanhamento de Certificado de Dispensa de Incorporação (CDI).
  - Opção 3: Alistamento Feminino.
  - Tratamento de exceção para opções fora da faixa prevista (`default`).

## 📋 Pré-requisitos
Para compilar e executar o projeto, você precisará de:
- Compilador C instalado no ambiente (ex: **GCC** no Linux/Windows via MinGW/WSL ou **Clang** no macOS/Linux).
- Terminal de linha de comando (Bash, Zsh, PowerShell ou CMD).

## 🔧 Como Compilar e Executar

1. **Clone ou salve o arquivo:**
   Certifique-se de salvar o código em um arquivo denominado `main.c`.

2. **Compilação:**
   Execute o compilador C com flags recomendadas para segurança e boas práticas:
   ```bash
   gcc -Wall -Wextra -pedantic main.c -o alistamento
