#include<stdio.h>

int gcd(int,int);

int main(){
    int num1 ;
    int num2 ;
    printf("Enter 2 integers:");
    scanf("%d %d", &num1,&num2);
    printf("GCD of %d and %d is %d",num1,num2,gcd(num1,num2));
   
    return 0;
}

int gcd(int num1 , int num2){
    if(num2!=0)
    return gcd(num2,num1%num2);
    else
    return num1;
}