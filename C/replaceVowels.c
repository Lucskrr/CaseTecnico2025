#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replaceVowels(char str[])
{
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(str); i++)
    {
        if (strchr(vowels, str[i]) != NULL)
        {
            str[i] = '?';
        }
    }
}

int main()
{
    char str1[] = "Foo";
    char str2[] = "Bar";

    replaceVowels(str1);
    replaceVowels(str2);

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
