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

Calculating the Sum of Array Elements:

#include <stdio.h>

int main() {
    int a[6] = {3, 7, 1, 4, 6, 8};
    int sum = 0, i;
    for (i = 0; i < 6; i++) {
        sum = sum + a[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
