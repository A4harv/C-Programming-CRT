#include<stdio.h>
#include<stdbool.h>
bool chkSquare(int iLen, int iBread)
{
    if(iLen == iBread){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int iLength = 0;
    int iBreadth = 0;
    int iRet = false;
    printf("Enter the first value: ");
    scanf("%d",&iLength);
    printf("Enter the second value: ");
    scanf("%d",&iBreadth);
    iRet = chkSquare(iLength,iBreadth);
    if(iRet == true){
        printf("%d is a square" );
    }
    else{
        printf("%d is not a square" );
    }
    return 0;

}