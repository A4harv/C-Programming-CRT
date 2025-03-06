 #include<stdio.h>

int AddN(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = AddN(iValue);

    printf("Sum of Numbers are : %d",iRet);

    return 0;
}