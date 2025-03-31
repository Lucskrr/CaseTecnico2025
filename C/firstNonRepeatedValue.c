#include <stdio.h>

int firstNonRepeatedValue(int array[], int length)
{
    int count[1000] = {0};

    for (int i = 0; i < length; i++)
    {
        count[array[i]]++;
    }

    for (int i = 0; i < length; i++)
    {
        if (count[array[i]] == 1)
        {
            return array[i];
        }
    }

    return -1;
}

int main()
{
    int array[] = {2, 2, 3, 1, 1, 6};
    int length = sizeof(array) / sizeof(array[0]);

    printf("%d\n", firstNonRepeatedValue(array, length));

    return 0;
}
