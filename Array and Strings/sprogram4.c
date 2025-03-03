#include <stdio.h>
#include <string.h>
int main()
{
    char a[50] = "Atharv";
    char b[50];
    char c[50];
    char d[50]="Khaire";
    printf("Length of String id %lu\n", strlen(a));
    strcpy(b, a);
    strncpy(c, a, 4);
    strncat(a, d, 4);
    printf("Copied string from a is  %s\n", b);
    c[4] = '\0';
    printf("Copied string from a till 4th is %s \n", c);
    printf("Concatinated string from a %s \n", a);
    
    return 0;

}