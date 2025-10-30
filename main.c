#include <stdio.h>

int main()
{
    int opcao = 0;
    int idade;
    int loginCorreto = 0;
    char senha[30];
    char login[30];
    char tentativaSenha[30];
    char tentativaLogin[30];
    float nota1, nota2;
    float soma;
    int valor;
    float raio;
    float base, altura;
    int segundos_totais, horas, minutos, segundos;
    float salario, diaria;
    int dias;
    int i = 0;
    int idade;
    float peso, alturaUsuario, imc;

    while (opcao != 9)
    {
        printf("\nMenu Principal:\n");
        printf("1) Cadastro e login");
        printf("2) Modulo Pessoal");
        printf("3) Modulo Financeiro\n");
        printf("4) Modulo Academico\n");
        printf("5) Modulo utilidades\n");
        printf("9) Sair\n");
        printf("Escolha uma opcao: \n");

        scanf("%d", &opcao);

        if (opcao == 1)
        {
            i = 0;

            printf("=== CADASTRO ===\n");
            printf("Digite o login: ");
            scanf("%s", login);

            printf("Digite a senha: ");
            scanf("%s", senha);

            while (senha[i] != '\0')
            {
                i++;
            }

            if (i <= 6 || senha[0] == '\0' ||
                (senha[0] == '1' && senha[1] == '2' && senha[2] == '3' && senha[3] == '4' && senha[4] == '5' && senha[5] == '6' && senha[6] == '\0'))
            {
                printf("Senha invalida\n");
            }
            else
            {
                printf("Senha valida! Cadastro concluido.\n");

                printf("\n=== LOGIN ===\n");
                printf("Digite o login: ");
                scanf("%s", tentativaLogin);

                printf("Digite a senha: ");
                scanf("%s", tentativaSenha);

                i = 0;
                while (login[i] == tentativaLogin[i] && login[i] != '\0')
                {
                    i++;
                }
                if (!(login[i] == '\0' && tentativaLogin[i] == '\0'))
                {
                    printf("Login incorreto. Acesso negado.\n");
                }
                else
                {
                    i = 0;
                    while (senha[i] == tentativaSenha[i] && senha[i] != '\0')
                    {
                        i++;
                    }
                    if (senha[i] == '\0' && tentativaSenha[i] == '\0')
                    {
                        printf("Acesso permitido!\n");
                        loginCorreto = 1;
                    }
                    else
                    {
                        printf("Senha incorreta. Acesso negado.\n");
                    }
                }
            }
        }

        else if (opcao == 2)
        {
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            if (idade < 18)
            {
                printf("Menor de idade\n");
            }
            else
            {
                printf("Maior de idade\n");
            }

            if (idade < 16)
            {
                printf("Nao vota\n");
            }
            else if ((idade >= 16 && idade < 18) || idade >= 70)
            {
                printf("Voto opcional\n");
            }
            else
            {
                printf("Voto obrigatorio\n");
            }

            // Parte 2: IMC
            printf("\nDigite seu peso (kg): ");
            scanf("%f", &peso);

            printf("Digite sua altura (m): ");
            scanf("%f", &alturaUsuario);

            imc = peso / (altura * alturaUsuario);

            printf("Seu IMC eh: %.2f\n", imc);
        }

        else if (opcao == 3)
        {
            printf("Digite seu salario: \n");
            scanf("%f", &salario);

            printf("Em 12 meses vc recebera: R$ %.2f", salario * 12);

            printf("Digite o número de dias trabalhados: ");
            scanf("%d", &dias);

            printf("Digite o valor da diária: ");
            scanf("%f", &diaria);

            salario = dias * diaria;

            printf("\nSalário do período: R$ %.2f\n", diaria * dias);
        }

        else if (opcao == 4)
        {
            printf("Escreva a nota 1: ");
            scanf("%f", &nota1);

            printf("Escreva a nota 2: ");
            scanf("%f", &nota2);

            soma = nota1 + nota2;
            float media = soma / 2;

            printf("\nSua media eh: %.2f\n", media);
            printf("Soma: %.2f\n", soma);
            printf("Dobro da media: %.2f\n", 2 * media);

            if (media >= 7)
            {
                printf("Parabens! Voce passou!\n");
            }
            else if (media >= 4)
            {
                printf("Voce esta de recuperacao!\n");
            }
            else
            {
                printf("Voce reprovou!\n");
            }
        }
        else if (opcao == 5)
        {
            printf("Digite um valor: ");
            scanf("%d", &valor);

            if (valor % 2 == 0)
            {
                printf("Esse numero eh par!\n");
            }
            else
            {
                printf("Esse numero eh impar\n");
            }

            if (valor >= 10 && valor <= 50)
            {
                printf("Esse valor esta entre [10, 50]\n");
            }
            else
            {
                printf("Esse valor nao esta entre [10, 50]\n");
            }

            printf("Digite o valor do raio: ");
            scanf("%f", &raio);
            printf("Perimetro do circulo: %.2f\n", 2 * 3.14159 * raio);

            printf("Digite o valor da base do retangulo: ");
            scanf("%f", &base);
            printf("Digite o valor da altura do retangulo: ");
            scanf("%f", &altura);

            printf("Area do retangulo: %.2f\n", base * altura);
            printf("Perimetro do retangulo: %.2f\n", 2 * (base + altura));

            printf("Digite um tempo em segundos para transformar em horas e minutos");
            scanf("%d", &segundos_totais);

            horas = segundos_totais / 3600;
            minutos = (segundos_totais - (horas * 3600)) / 60;
            segundos = segundos_totais - (horas * 3600) - (minutos * 60);

            printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
        }
        else if (opcao != 9)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}