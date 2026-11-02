#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{   
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(int iCnt=1;iCnt<=iNo;iCnt++){
        printf("*\t");
        printf("#\t");
    }


}
int main()
{
    int iValue =0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}