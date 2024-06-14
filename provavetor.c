#include <stdio.h>

int main()
{
    int idade[3];
    char sexo[3];
    float salario[3];
    char funcionarios[3][50];
    int i=0;
    int qtdSalarioInferior2000;
    int somaidades=0;
    float media=0;
    int contagem=0;
    int homens=0;
    int mulheres=0;
    //entradas
    for(i=0; i<3; i++)
    {
        printf("Digite o nome do funcionario:\n ");
        scanf("%s", &funcionarios[i]);

        printf("Digite a idade do funcionario:\n");
        scanf("%i", &idade[i]);

        printf("Digite o sexo do funcionario(M ou F):\n");
        scanf("%s", &sexo[i]);

        printf("Digite o salario do funcionario:\n");
        scanf("%f", &salario[i]);
    }

    //processamento
    for(i=0; i<3;i++)
    {
        if(salario[i] < 2000)
        {
            qtdSalarioInferior2000++;
        }

        if(salario[i] > 4700)
        {
            somaidades += idade[i];
            contagem++;

            media = somaidades / contagem;
        }

        if(sexo[i] == 'M' || sexo[i] == 'm')
        {
            homens++;
        }
        else if (sexo[i] == 'F' || sexo[i] == 'f')
        {
            mulheres++;
        }
    }

    //resultados
    printf("Quantidade de pessoas com salário inferior a 2k: %i\n", qtdSalarioInferior2000);
    printf("A média da idade das pessoas que possuem salario acima de 4700: %.2f\n", media);
    printf("Total de homens: %i, total de mulheres: %i\n", homens, mulheres);

    return 0;
}
