#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    float a, b;
    float matriz[n][10];

    //Preencher a matriz para n alunos, sendo n < 130
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    //Sorting para eliminar os 2 mais baixos com Swap a, b
    for (int l = 0; l < n; l++)
    {
        for (int x = 1; x < 10; x++)
        {
            b = matriz[l][x];
            for (int y = x + 1; y < 10; y++)
            {
                if (matriz[l][x] > matriz[l][y])
                {
                    a = matriz[l][x];
                    matriz[l][x] = matriz[l][y];
                    matriz[l][y] = a;
                }
            }
        }
    }

    for (int ra = 1; ra <= n; ra++)
    {
        printf("%d ", ra);
    }

    //Calculando média da matriz iniciando da coluna de index 3
    float soma, media;
    for (int i = 0; i < n; i++)
    {
        for (int j = 3; j < 10; j++)
        {
            soma += matriz[i][j];
        }
    }
    media = soma / 6;

    printf("%.3f", media);

    int conceitoA = 0, conceitoB = 0, conceitoC = 0, conceitoD = 0, conceitoF = 0;

    //Condição para Conceitos e contador de Conceitos
    if (media >= 8.5)
    {
        printf(" A\n");
        conceitoA++;
    }
    else if (media >= 7.0)
    {
        printf(" B\n");
        conceitoB++;
    }
    else if (media >= 5.5)
    {
        printf(" C\n");
        conceitoC++;
    }
    else if (media >= 4.5)
    {
        printf(" D\n");
        conceitoD++;
    }
    else
    {
        printf(" F\n");
        conceitoF++;
    }

    //Soma de conceitos para %

    float conceitosTotal = conceitoA + conceitoB + conceitoC + conceitoD + conceitoF;

    printf("\nA %d %.1f\n", conceitoA, conceitoA / conceitosTotal * 100);
    printf("B %d %.1f\n", conceitoB, conceitoB / conceitosTotal * 100);
    printf("C %d %.1f\n", conceitoC, conceitoC / conceitosTotal * 100);
    printf("D %d %.1f\n", conceitoD, conceitoD / conceitosTotal * 100);
    printf("F %d %.1f\n", conceitoF, conceitoF / conceitosTotal * 100);

    return 0;
}
