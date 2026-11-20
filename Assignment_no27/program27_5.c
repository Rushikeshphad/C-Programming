#include <stdio.h>

void Reverse(char *str)
{
    char *end = str;
    
    while (*end != '\0')
    {
        end++;
    }
    end--; 

    while (end >= str)
    {
        printf("%c", *end);
        end--;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}