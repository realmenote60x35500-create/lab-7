#include <stdio.h>
int main()
{
    int position;
    int no_of_shirts;
    printf("enter number of shirts");
    scanf("%d", &no_of_shirts);
    int age[no_of_shirts];
    int price[no_of_shirts];
    int arr[no_of_shirts];

    for (int i = 0; i < no_of_shirts; i++)
    {
        printf("enter age:");
        scanf("%d", &age[i]);
        printf("enter price:");
        scanf("%d", &price[i]);
    }
    for (int i = 0; i < no_of_shirts - 1; i++)
    {
        for (int j = 0; j < no_of_shirts - i - 1; j++)
        {
            if ((age[j] > age[j + 1]) || (age[j] == age[j + 1]) && (price[j] < price[j + 1]))
            {
                // age swap
                position = age[j];
                age[j] = age[j + 1];
                age[j + 1] = position;
                //               swap prices

                position = price[j];
                price[j] = price[j + 1];
                price[j + 1] = position;
            }
        }
    }

    printf("increasing order in case age is same:\n");
    for (int i = 0; i < no_of_shirts; i++)
    {
        printf("%d\t\n", age[i]);
    }
    printf("decreasing order in case:\n");
    for (int i = 0; i < no_of_shirts; i++)
    {
        printf("%d\t\n", price[i]);
    }
    printf("increasing order \n");
    // descending order
    for (int i = 0; i < no_of_shirts; i++)
    {
        printf("%d\t\n", age[i]);
    }
    printf("decreasing order:\n");
    for (int i = 0; i < no_of_shirts; i++)
    {
        printf("%d\n", price[i]);
    }

    return 0;
}