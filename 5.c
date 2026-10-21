#include <stdio.h>
int main()
{
    int max = -1;
    int position = 0;
    char arr[5][41];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("enter string\n");
        scanf(" %40[^\n]", arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        int count1 = 0;
        int count = 0;

        for (int j = 0; arr[i][j] != '\0'; j++)
        {

            if (arr[i][j] == '?')
            {
                count1++;
            }

            else
            {
                if (arr[i][j] == '!')
                {
                    count++;
                }
            }
        }
        int combined = count1 + count;
        printf("Count of ? = %d\n", count1);
        printf("Count of ! = %d\n", count);
        printf("Combined count = %d\n", combined);
        if (combined > max)
        {
            max = combined;
            position = i;
        }
    }
    printf("%s\n", arr[position]);
    printf("Greatest combined count = %d\n", max);

    return 0;
}