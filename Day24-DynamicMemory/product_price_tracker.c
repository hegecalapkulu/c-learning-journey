//Day24-DynamicMemory –--->  Product Price Tracker Project

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int output = 1;
    int count = 1;
    float *arr = malloc(count * sizeof(float));
    float total = 0;
    while (output == 1)
    {
        arr[count - 1] = -1;
        while (!(arr[count - 1] > 0))
        {
            printf("Enter product price: ");
            scanf("%f", &arr[count - 1]);
            
            if (arr[count - 1] <= 0)
            {
                printf("Invalid input, price must be positive!\n");
            }
        }
        total += arr[count - 1];
        printf("Do you want to add another product? (1-Yes, any other number-No)\n");
        scanf("%d", &output);
        if (output == 1)
        {
            count++;
            arr = realloc(arr, count * sizeof(float));
        }
    }

    for (int i = 0; i < count - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < count; j++)
        {

            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            float temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("The Lowest: %.2f\n", arr[0]);
    printf("The Highest: %.2f\n", arr[count - 1]);
    printf("The Average: %.2f\n", total / count);
    int numBelow = 0;

    for (int i = 0; i < count; i++)
    {
        if (arr[i] < total / count)
        {
            numBelow++;
        }
    }
    printf("Number of products below average: %d\n", numBelow);
    free(arr);
    return 0;
}