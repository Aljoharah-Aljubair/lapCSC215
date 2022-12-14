#include<stdio.h>


int main(){
    int number ;
    printf("Enter an integer:");
    scanf("%d", &number);
    printf(number == 0 ? "The number is zero \n" : number%2 == 0 ? " %d is even \n" : "%d is odd\n" , number);
    return 0;

}