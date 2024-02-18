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

Sum of three numbers:

#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("The sum of three numbers is: %d\n",sum);
}

Sum of N numbers: 

#include <stdio.h>
int main() {
    int n, num,sum=0;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for (int i=0;i<n;i++) {
        printf("Number %d: ",i+1);
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum of %d numbers: %d\n",n,sum);
}

Palindrome of number:

#include <stdio.h>
int main() {
    int number,originalNumber,rev=0,rem;
    printf("Enter the number:");
    scanf("%d",&number);
    originalNumber=number;
    
    while(number!=0){
        rem=number % 10;
        rev=rev*10+rem; 
        number=number/10;
    } if(originalNumber==rev){
        printf("The given number is palindrome");
    } else {
        printf("The given number is not a palindrome");
    }
    return 0;
}

Palindrome of string: 

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,j,len,flag=1;
    printf("Enter a string: ");
    scanf("%s",str);
    len=strlen(str);
    for (i=0,j=len-1;i<len/2;i++,j--){
        if(str[i]!=str[j]){
            flag=0;
            break;
        }
    }
    if (flag){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
   }
    return 0;
}

Reverse a string or number: 

#include<stdio.h>

void reverse(char *a){  //to traverse till the last character
    if(*a){
        if(*a != "\n"){
        reverse(a+1);  //move to the next character
        printf("%c", *a);
        }
    }
}

int main(){
    char a[100];
    printf("Enter the input: ");
    scanf("%[^\n]s",a); // spaces are also scanned
    reverse(a);
    printf("\n");
    
}

Fibonacci Series Generator:

#include<stdio.h>

void fibonacci(int n){
    int first=0,second=1,next;
    printf("Fibonacci Series up to %d terms:\n", n);
    for(int i=0;i<=n;i++){
        if(i <= 1) {
        next=i;
    } else {
        next=first+second;
        first=second;
        second=next;
    }
    printf("%d ",next);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of  terms: ");
    scanf("%d",&n);
    fibonacci(n);
}

Prime number or not:

#include <stdio.h>
int main() {
    int n,i,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n % i == 0){
            count++;
        }
    }
if(count == 2){
    printf("The number is prime number");
} else {
    printf("The number is not a prime number");
}
  return 0;
}
