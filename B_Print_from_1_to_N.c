#include <stdio.h>

void oneToN(int num, int i)
{
    if (i <= num)
    {
        /* code */
        printf("%d\n", i);
        oneToN(num, i + 1);
    }
}

int main()
{
    int num, i = 1;
    scanf("%d", &num);

    oneToN(num, i);

    return 0;
}