#include<stdio.h>

void DisplayTable(int iNo)
{

    int j = 0;

    for(j = 1; j <= 10;j++)
        {
            printf("\n%d\n",iNo * j);
            
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