#include <stdio.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
}