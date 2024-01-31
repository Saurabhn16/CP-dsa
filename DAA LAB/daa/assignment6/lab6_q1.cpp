#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void recursive(int row1, int col1, int A[][MAX],
               int row2, int col2, int B[][MAX],
               int C[][MAX])
{

    static int i = 0, j = 0, k = 0;

    if (i >= row1)
        return;

    if (j < col2)
    {
        if (k < col1)
        {
            C[i][j] += A[i][k] * B[k][j];
            k++;

            recursive(row1, col1, A, row2, col2, B, C);
        }

        k = 0;
        j++;
        recursive(row1, col1, A, row2, col2, B, C);
    }

    j = 0;
    i++;
    recursive(row1, col1, A, row2, col2, B, C);
}

void multiplyMatrix(int row1, int col1, int A[][MAX],
                    int row2, int col2, int B[][MAX])
{
    if (row2 != col1)
    {
        printf("Not Possible\n");
        return;
    }

    int C[MAX][MAX] = {0};

    recursive(row1, col1, A, row2, col2, B, C);

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            printf("%d ", C[i][j]);

        printf("\n");
    }
}

int main()
{
    int A[MAX][MAX];

    int B[MAX][MAX];
    int row1 =16, col1 =16, row2 =16, col2 =16;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            A[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
             B[i][j] = rand() % 10;
        }
    }
    multiplyMatrix(row1, col1, A, row2, col2, B);

    return 0;
}