# Saque Rapido Bank

Simulador de caixa eletrônico em C, no qual a pessoa pode fazer depósitos, sacar dinheiro, consultar o saldo e sair do sistema.

Projeto desenvolvido na disciplina de Algoritmos e Pensamento Computacional (Universidade Cruzeiro do Sul), com foco em laços de repetição e estruturas condicionais.

## Funcionalidades

- Depositar
- Sacar
- Consultar saldo
- Sair, com mensagem de encerramento e saldo final

A conta começa com saldo de R$ 100,00.

## Tratamento de entradas inválidas

- **Letra no menu:** o programa avisa que só números são aceitos e mostra o menu de novo.
- **Opção fora do menu:** o programa avisa que a opção é inválida e volta ao menu.
- **Letra no valor de depósito ou saque:** o programa avisa e descarta o que foi digitado, sem alterar o saldo.
- **Valor zero ou negativo:** o programa pede um valor maior que zero.
- **Saque maior que o saldo:** o saque é negado e o saldo continua o mesmo.

## Conceitos praticados

- Laço `do-while` mantendo o menu ativo até o usuário escolher sair
- `switch` para tratar cada opção do menu
- `if` / `else` aninhados para validar valores
- Leitura de dados com `scanf`, verificando o retorno para detectar entradas inválidas
- Limpeza do buffer do teclado com `getchar()`

## Como compilar e executar

É necessário ter o compilador GCC instalado.

```bash
gcc main.c -o banco
```

No Windows (PowerShell):

```powershell
.\banco
```

No Linux ou macOS:

```bash
./banco
```

## O que aprendi

Foi o meu primeiro projeto em C com menu interativo. Aprendi a testar o programa rodando-o, e foi assim que encontrei problemas como o loop infinito quando o usuário digita uma letra. Também aprendi que o `scanf` informa se a leitura deu certo, e usei isso para tratar entradas inválidas sem quebrar o programa. Como próximos passos, pretendo separar depósito, saque e consulta em funções.