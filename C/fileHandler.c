#include <stdio.h>
#include <stdlib.h>

int fileHandler()
{
    FILE *file = fopen("data.dat", "r");
    if (file == NULL)
    {
        printf("Arquivo não encontrado.\n");
        return 0;
    }

    char line[1000];
    int count = 0;

    while (fgets(line, sizeof(line), file))
    {
        int zeros = 0, ones = 0;

        for (int i = 0; line[i] != '\0'; i++)
        {
            if (line[i] == '0')
            {
                zeros++;
            }
            else if (line[i] == '1')
            {
                ones++;
            }
        }

        if (zeros % 3 == 0 || ones % 2 == 0)
        {
            count++;
        }
    }

    fclose(file);
    return count;
}

int main()
{
    printf("%d\n", fileHandler());
    return 0;
}
