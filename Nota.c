#include <stdio.h>
int main()
{

    int NF = 2, i = 1, n_iten = 3, t = 1;
    float val_item, total, total1;
    char nome_item[25];

    while (t <= NF)
    {
        printf("-----------------------------------------------\n");
        printf("Digite os valores da notas fiscais n: %i \n", t);
        printf("-----------------------------------------------\n");

        while (i <= n_iten)
        {

            printf("Digite o nome do item: ");
            scanf("%s", &nome_item);
            printf("Digite o valor dos itens: ");
            scanf("%f", &val_item);
            i++;
            total += val_item;
            total1 += val_item;
        }
        printf("-----------------------------------------------\n");
        printf("O valor total e: %f \n", total);
        printf("-----------------------------------------------\n");
        printf("\n");
        total = 0;
        t++;
        i = 1;
    }
    printf("-----------------------------------------------\n");
    printf("O valor total de todas as notas fiscais e: %f \n", total1);
    printf("-----------------------------------------------\n");

    return 0;
}