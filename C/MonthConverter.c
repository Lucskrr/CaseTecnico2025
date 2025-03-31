#include <stdio.h>

const char *correspondingMonth(int month)
{
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    if (month >= 1 && month <= 12)
    {
        return months[month - 1];
    }
    return "Unknown Month";
}

int main()
{
    printf("%s\n", correspondingMonth(1));
    printf("%s\n", correspondingMonth(13));
    return 0;
}
