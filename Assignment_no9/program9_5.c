#include<stdio.h>
#include<stdlib.h>
int EvenOddFactorialDiff(int iNo)
{   
    int OddFact=1;
    int EvenFact=1;
   for(int iCnt=1;iCnt<=iNo;iCnt++)
   {
    if(iCnt%2!=0)
    {
        OddFact=OddFact*iCnt;
    }
    else
    {
        EvenFact=EvenFact*iCnt;
    }
   }
   return EvenFact-OddFact;
   }

int main()
{
    int iValue =0, iRet=0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    iRet=EvenOddFactorialDiff(iValue);
    printf("Difference between Even and Odd Factorial: %d",iRet);
    return EXIT_SUCCESS;
}