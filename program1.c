#include <stdio.h>
int addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    int iRet = 0;

    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the first number: \n");
    scanf("%d", &num2);
    iRet = addition(num1, num2);
    printf("Addition of %d and %d is %d \n", num1, num2, iRet);
    return 0;
}