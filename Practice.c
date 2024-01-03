Odd or Even:

# include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even");
    } else{
        printf("Odd");
    }
}

Last digit in a number:

#include <stdio.h>

int lastDigit(int n){
    return (n % 10);
}

int main(){
    int input;
    printf("Enter the number: ");
    scanf("%d", &input);
    printf("%d\n", lastDigit(input));
}
