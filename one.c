#include<stdio.h>


int main(){
    float sale = 0.25;
    float price=0;
    float newPrice=0;

    printf("Enter price pleas:");
    
    scanf("%f",&price);
    newPrice = price - (price*sale);
    
    printf("new price = %-10.3f",newPrice);
    
    return 0;

}