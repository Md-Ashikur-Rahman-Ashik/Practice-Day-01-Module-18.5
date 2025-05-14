#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int integerArray[row][column];

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            scanf("%d", &integerArray[i][j]);
        }
    }

    int desiredNumber;
    scanf("%d", &desiredNumber);

    int hasDesiredNumber = 0;

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            if (integerArray[i][j] == desiredNumber)
            {
                /* code */
                hasDesiredNumber++;
            }
        }
    }

    if (hasDesiredNumber > 0)
    {
        /* code */
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}