#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

void atmMachine(int value, int bankNotes[], int numNotes)
{
    qsort(bankNotes, numNotes, sizeof(int), compare);
    int result[numNotes];

    for (int i = 0; i < numNotes; i++)
    {
        result[i] = value / bankNotes[i];
        value %= bankNotes[i];
    }

    for (int i = 0; i < numNotes; i++)
    {
        if (result[i] > 0)
        {
            printf("Nota de %d: %d cédula(s)\n", bankNotes[i], result[i]);
        }
    }
}

int main()
{
    int bankNotes[] = {5, 50, 100};
    int numNotes = sizeof(bankNotes) / sizeof(bankNotes[0]);
    int value = 150;

    atmMachine(value, bankNotes, numNotes);

    return 0;
}
