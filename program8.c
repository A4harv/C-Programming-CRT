#include<stdio.h>

void DisplayTable(int iNo)
{

    int i = 0, j = 0;

    for(i = 1; i <= iNo;i++)
    {
        for(j = 1; j <= 10;j++)
        {
            printf("%d\n",iNo * j);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}