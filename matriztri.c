#include <stdio.h>

int main(void)
{
    int dx;
    int dy;
    int dz;

    printf("Inserta la dimension de su matriz en las filas\n");
    scanf("%d", &dx);
    printf("Inserta la dimension de su matriz en las columnas\n");
    scanf("%d", &dy);
    printf("Inserta la dimension de su matriz en la profundidad\n");
    scanf("%d", &dz);
    int matrix[dx][dy][dz];

    for (int i = 0; i < dx; i++)
    {
        for (int j = 0; j < dy; j++)
        {
            for (int k = 0; k < dz; k++)
            {
                matrix[i][j][k] = 0;
            }
        }
    }

    for (int j = 0; j < dy; j++)
    {
        for (int k = 0; k < dz; k++)
        {
            matrix[dx - 1][j][k] = 1;
        }
    }

    printf(" \n");
    printf("La matriz es:\n");

    for (int i = 0; i < dx; i++)
    {
        for (int j = 0; j < dy; j++)
        {
            for (int k = 0; k < dz; k++)
            {
                printf("%d", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}