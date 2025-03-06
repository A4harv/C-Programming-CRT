#include <stdio.h>
int main()
{
    int iValue = 0;
    int iSum = 0;
    int iCnt = 0;
    printf("Enter the Number: \n");
    scanf("%d", &iValue);
    for (iCnt = 1; iCnt < iValue; iCnt++)
    {
        if (iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iValue == iSum)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is a not perfect number\n",iValue);
    }
    return 0;
}