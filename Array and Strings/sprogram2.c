#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    char b[50];
    printf("Enter your name\n");
    scanf("%s",&a);
    fgets(b,sizeof(b),stdin);
    printf("%s\n",b);
}