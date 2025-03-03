#include <stdio.h>
int Square(int iValue)
{
    int iSquare = 0;
    iSquare = iValue * iValue;
    return iSquare;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the value: ");
    scanf("%d", &iValue);
    iRet = Square(iValue);
    printf("Square is : %d", iRet);
    return 0;
}