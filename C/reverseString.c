#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char str1[] = "foo";
    char str2[] = "bar";

    reverseString(str1);
    reverseString(str2);

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
