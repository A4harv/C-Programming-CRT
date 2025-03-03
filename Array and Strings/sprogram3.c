#include <stdio.h>
#include <string.h>
int main()
{
    char a[50] = "Atharv";
    char b[50];
    char c[50];
    printf("Length of String id %lu\n", strlen(a));
    strcpy(b, a);
    printf("Copied string from a is  %s\n", b);
    strncpy(c, a, 4);
    c[4] = '\0';
    printf("Copied string from a till 4th is %s \n", c);
    
    return 0;

}