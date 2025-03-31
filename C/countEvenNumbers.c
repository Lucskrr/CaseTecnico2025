#include <stdio.h>

int countEvenNumbers(int numbers[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);

    printf("%d\n", countEvenNumbers(array, length));
    return 0;
}
