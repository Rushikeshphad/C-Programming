#include <stdio.h>
#include <stdlib.h>

int Table(int iNo)
{
  int iMult=1;
    for(int iCnt=10;iCnt>=1;iCnt--)
    {
        iMult=iNo*iCnt;
        printf("%d\t",iMult);
    }
}

int main()
{

    int iValue = 0,iRet=0;

    printf("Enter a single Number: ");
    scanf("%d", &iValue);

    iRet=Table(iValue);
    return EXIT_SUCCESS;
}