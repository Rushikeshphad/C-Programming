#include<stdio.h>
#include<stdlib.h>
int Display(int iNo)
{   
    if(iNo<0)
    {
        iNo=-iNo;
    }
    return iNo*70;


}
int main()
{
    int iValue =0, iRet=0;
    printf("Enter number of USD\n");
    scanf("%d",&iValue);
    iRet=Display(iValue);
    printf("Value in INR is:%d",iRet);
    return EXIT_SUCCESS;
}