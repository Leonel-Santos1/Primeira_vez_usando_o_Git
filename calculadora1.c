#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    int tipo_ope, opc;
    float num, num1;

    printf("Digite a opera��o que deseja realizar: \n1-Adi��o \n2-Subtra��o \n3-Multiplica��o \n4-Divis�o \nDigite: ");
    scanf("%i", &tipo_ope);

    printf("Numero: ");
    scanf("%f", &num);
    printf("Numero: ");
    scanf("%f", &num1);

    if (tipo_ope == 1)
    {

        num += num1;
        printf("O resultado �: %0.f \n", num);
    }
    if (tipo_ope == 2)
    {

        num -= num1;
        printf("O resultado �: %0.f \n", num);
    }
    if (tipo_ope == 3)
    {

        num *= num1;
        printf("O resultado �: %0.f \n", num);
    }
    if (tipo_ope == 4)
    {

        num /= num1;
        printf("O resultado �: %0.f \n", num);
    }

    printf("Deseja continuar com a mesma ou outra opera��o 1 - Sim 2 - N�o \nDigite: ");
    scanf("%i", &opc);

    while (opc == 1)
    {

        printf("Digite a opera��o que deseja realizar: \n1-Adi��o \n2-Subtra��o \n3-Multiplica��o \n4-Divis�o \nDigite: ");
        scanf("%i", &tipo_ope);

        printf("Numero: ");
        scanf("%f", &num);
        printf("Numero: ");
        scanf("%f", &num1);

        if (tipo_ope == 1)
        {

            num += num1;
            printf("O resultado �: %0.f \n", num);
        }
        if (tipo_ope == 2)
        {

            num -= num1;
            printf("O resultado �: %0.f \n", num);
        }
        if (tipo_ope == 3)
        {

            num *= num1;
            printf("O resultado �: %0.f \n", num);
        }
        if (tipo_ope == 4)
        {

            num /= num1;
            printf("O resultado �: %0.f \n", num);
        }
        printf("Deseja continuar com a mesma ou outra opera��o 1 - Sim 2 - N�o \nDigite: ");
        scanf("%i", &opc);
    }

    return 0;
}