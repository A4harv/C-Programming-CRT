#include <stdio.h>
float Tax(int iRs)
{
    float fTax = 0.0f;
    if (iRs > 100000)
    {
        fTax = 0.15 * iRs;
    }
    else if (iRs > 50000 && iRs <= 100000)
    {
        fTax = 0.1 * iRs;
    }
    else
    {
        fTax = 0.05 * iRs;
    }
    return fTax;
}

int main()
{
    int iPrice = 0;
    float iRet = 0.0f;
    printf("Enter the Price of Vehical :\n");
    scanf("%d", &iPrice);
    iRet = Tax(iPrice);
    printf("The Tax is : %.2f\n", iRet);
    return 0;
}