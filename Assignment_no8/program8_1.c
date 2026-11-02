#include<stdio.h>
#include<stdlib.h>
void Number(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo<50){
        printf("Small Number\n");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Medium Number\n");
    }
    else
    {
        printf("Large Number\n");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    Number(iValue);
    return EXIT_SUCCESS;
}