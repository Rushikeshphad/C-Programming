#include<stdio.h>
#include<stdlib.h>
int OddFactorial(int iNo)
{   
    int OddFact=1;
   for(int iCnt=1;iCnt<=iNo;iCnt++)
   {
    if(iCnt%2!=0)
    {
        OddFact=OddFact*iCnt;
    }
   }
   return OddFact;


}
int main()
{
    int iValue =0, iRet=0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    iRet=OddFactorial(iValue);
    printf("Even Factorial of Number: %d",iRet);
    return EXIT_SUCCESS;
}