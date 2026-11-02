#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
   int iFact=1;
   for(int iCnt=1;iCnt<=iNo;iCnt++)
   {
    iFact=iFact*iCnt;
   }
   return iFact;
}

int main()
{

    int iValue = 0,iRet=0;

    printf("Enter a single Number: ");
    scanf("%d", &iValue);

    iRet=Factorial(iValue);
     printf("Factorial of %d is %d\n",iValue,iRet);
    return EXIT_SUCCESS;
}