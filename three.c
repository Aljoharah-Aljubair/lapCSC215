#include<stdio.h>
void square(int* nptr){
     *nptr=(*nptr)*(*nptr);
    
}
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("original value is %d \n",x);
    square(&x);
    printf("squared value is %d",x);
}