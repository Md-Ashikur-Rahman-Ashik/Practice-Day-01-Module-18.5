#include <stdio.h>

void printNtoOne(int num)
{
    if (num > 1)
    {
        /* code */
        printf("%d ", num);
        printNtoOne(num - 1);
    }
    else
    {
        printf("%d", num);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    printNtoOne(num);

    return 0;
}