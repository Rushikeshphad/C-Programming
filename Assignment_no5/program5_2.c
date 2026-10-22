#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if (iYear % 400 == 0 || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("%d -> Leap Year\n", iYear);
    }
    else
    {
        printf("%d -> Not a Leap Year\n", iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
