#include<stdio.h>
#include<stdlib.h>
int EvenFactorial(int iNo)
{   
    int EvenFact=1;
   for(int iCnt=1;iCnt<=iNo;iCnt++)
   {
    if(iCnt%2==0)
    {
        EvenFact=EvenFact*iCnt;
    }
   }
   return EvenFact;


}
int main()
{
    int iValue =0, iRet=0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("Even Factorial of Number: %d",iRet);
    return EXIT_SUCCESS;
}