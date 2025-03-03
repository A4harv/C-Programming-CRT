#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    printf("Enter a :\n");
    scanf("%d",&a);

    printf("Enter b :\n");
    scanf("%d",&b);

    if(a > b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(b > a)
    {
        printf("%d is greater than %d",b,a);
    }
    else if(a == b)
    {
        printf("%d is equal to %d",a,b);

    }

    return 0;
}