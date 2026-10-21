#include <stdio.h>
int main()
{
    int n[6];
    int t;
    printf("enter target number:");
    scanf("%d", &t);

    for (int i = 0; i < 6; i++)
    {
        printf("enter n:");
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (n[i] + n[j] == t)
            {
                printf("Pairs:(%d,%d)", n[i], n[j]);
            }
        }
    }

    return 0;
}