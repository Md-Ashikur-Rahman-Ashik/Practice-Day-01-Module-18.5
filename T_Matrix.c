#include <stdio.h>

int main()
{
    int row;
    scanf("%d", &row);

    int integerArray[row][row];

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < row; j++)
        {
            /* code */
            scanf("%d", &integerArray[i][j]);
        }
    }

    int countPrimary = 0, countSecondary = 0;
    int l = row - 1;

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < row; j++)
        {
            /* code */
            if (i == j)
            {
                /* code */  
                countPrimary = countPrimary + integerArray[i][j];
            }
            else if (j == l && l >= 0)
            {
                /* code */
                countSecondary = countSecondary + integerArray[i][l];
                l--;
            }
        }
    }

    int result = countPrimary - countSecondary;

    if (result < 0)
    {
        /* code */
        result = result * (-1);
        printf("%d", result);
    }
    else
    {
        printf("%d", result);
    }

    return 0;
}