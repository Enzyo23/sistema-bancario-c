// Nome do Sistema : Saque Rapido Bank (caixa eletronico).
// Fazer depositos, saques e consultar saldo!
// Saudacao: Mensagem de boas-vindas ao usuario

#include <stdio.h>
int main()
{
        int opcao;
        float saldo = 100.00; // Mostra saldo inicial da conta.
        float valor;          // Guarda valor digitado pelo usuario em cada deposito ou saque

        printf("=== Saque Rapido Bank - Caixa Eletronico ===\n");
        printf("=== Faca depositos, saques e consulte seu saldo. ===\n");
        printf("=== Bem-vindo! ===\n");

        do
        {
                // Menu e perguntas
                printf("1 === Faca deposito ===\n");
                printf("2 === Sacar ===\n");
                printf("3 === Consultar saldo ===\n");
                printf("0 === Para encerrar ===\n");
                printf(" Escolha uma opcao! ");

                if (scanf("%d", &opcao) != 1)
                {
                        printf("Digite apenas numeros\n");
                        while (getchar() != '\n');
                        opcao = 7;
                }

                switch (opcao)
                {
                case 1: //"Pede um valor e soma no saldo"
                        printf("Digite o valor do deposito\n");

                        if (scanf("%f", &valor) == 1)
                        {
                                // Deu certo o valor, agora confere se e maior que zero
                                if (valor > 0)
                                {

                                        saldo += valor;
                                        printf("Deposito de %.2f realizado! Novo saldo: %.2f\n", valor, saldo);
                                }
                                else
                                {
                                        printf("Valor invalido, digite um valor maior que zero\n");
                                }
                        }
                        else
                        {
                                // Digitou letra: avisa e limpa o teclado
                                printf("Digite apenas numeros\n");
                                while (getchar() != '\n');
                        }

                        break;

                case 2: //"Pede um valor para sacar e subtrai no saldo"
                        printf("Digite o valor para sacar\n");

                        if (scanf("%f", &valor) == 1)
                        {
                                // Deu certo o valor, agora confere se é maior que zero
                                if (valor > 0)
                                {

                                        // valor valido,agora confere o saldo
                                        if (valor <= saldo)
                                        {
                                                saldo -= valor;
                                                printf("Saque de %.2f realizado! Novo saldo: %.2f\n", valor, saldo);
                                        }
                                        else
                                        {
                                                printf("Saque negado! Saldo insuficiente. Saldo atual: %.2f\n", saldo);
                                        }
                                }
                                else
                                {
                                        printf("Valor invalido, digite um valor maior que zero\n");
                                }
                        }
                        else
                        {
                                // Digitou letra: avisa e limpa o teclado
                                printf("Digite apenas numeros\n");
                                while (getchar() != '\n');
                        }
                        break;

                case 3: //"Consulta saldo"
                        printf("Saldo atual de %.2f\n", saldo);
                        break;

                case 0: //"Encerrar"
                        printf("Obrigado, estamos encerrando o sistema!\n");
                        printf("Agradecemos pela sua confianca em nossos servicos! Saldo atual de %.2f\n", saldo);
                        break;

                default:
                        printf("Opcao invalida, confira o menu novamente!\n");
                        break;
                }
        } while (opcao != 0);

        return 0;
}
