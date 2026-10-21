#include <stdio.h>
int main()
{
    int a;
    int arr[5][4] = {{1, 300, 0, 0}, {1, 320, 1, 310}, {0, 0, 1, 220}, {1, 380, 0, 0}, {1, 375, 1, 400}};
    char days[][10] = {"monday", "tuesday", "wednesday", "thursday", "friday"};
    char slots[][8] = {"days", "morning", "price", "evening", "price"};
    for (int l = 0; l < 5; l++)
    {
        printf("%s", slots[l]);
        printf("\t");
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {

        printf("%-12s", days[i]);
        for (int j = 0; j < 4; j++)
        {

            printf("%d", arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("enter slot (1 for morning and enter any number for evening)");
    scanf("%d", &a);
    if (a == 1)
    {

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                if (arr[i][j] == 1)
                {
                    printf("%s is availble and price is %d\n", days[i], arr[i][j + 1]);
                }
                else
                {
                    printf("not available\n");
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if (arr[i][j] == 1)
                {
                    printf("In evening %s is availble and price is %d\n", days[i], arr[i][j + 1]);
                }
                else
                {
                    printf("not available\n");
                }
            }
        }
    }

    return 0;
}
