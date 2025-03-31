#include <stdio.h>
#include <string.h>

int isValidLuhn(char *cardNumber)
{
    int sum = 0;
    int length = strlen(cardNumber);
    int alternate = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        int n = cardNumber[i] - '0';

        if (alternate)
        {
            n *= 2;
            if (n > 9)
            {
                n -= 9;
            }
        }

        sum += n;
        alternate = !alternate;
    }

    return sum % 10 == 0;
}

long findCreditCardNumber()
{
    for (long i = 5432100000000000; i <= 5432199999999999; i++)
    {
        char cardNumber[17];
        sprintf(cardNumber, "%ld", i);

        if (i % 123457 == 0 && cardNumber[16] == '4' && cardNumber[15] == '3' && cardNumber[14] == '2' &&
            cardNumber[13] == '1' && cardNumber[12] == '0' && isValidLuhn(cardNumber))
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    printf("%ld\n", findCreditCardNumber());
    return 0;
}
