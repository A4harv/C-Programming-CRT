#include<stdio.h>
int main(){
    int iProduct = 0;
    int iCost = 100;
    float iTotal = 0.0;
    printf("Enter the Quantity of Product: \n");
    scanf("%d", &iProduct);
    iTotal = iProduct*iCost;
    printf("Total Cost of Product is %f\n",iTotal);
    if(iTotal>1000){
        float iDis = 0;
        iDis = iTotal*0.1;
        printf("The Discount is %f",iDis);
    }
    return 0;
}