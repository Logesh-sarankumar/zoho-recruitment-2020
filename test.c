#include <stdio.h>
int main()
{
    int count = 4;
    int i, j;
    int k = 1;
    int l = 1;
    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= (count - i); j++)
        {
            printf(" ");
        }
        for (k = 1; (k <= count && (i % 2) == 1); k++)
        {
            printf("%d ", l++);
        }
        for (k = 1; (k <= count && (i % 2) == 0); k++)
        {
            printf("%d ", l++);
        }
        printf("\n");
    }
}
