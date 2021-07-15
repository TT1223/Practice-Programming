#include <stdio.h>

int main(){

int number;

printf("Enter an integer(No decimal numbers allowed):");
scanf("%d", &number);

if(typeof(number) == int ) {
    printf("The entered number is accepted");
    if(number%2==0){
    printf("%d is an even number" ,number);
    }
    else{
    printf("%d is an odd number" ,number);
    }
}

else {
    printf("The entered number is not accepted");
}

