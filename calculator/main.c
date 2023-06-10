#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, a+b);
}

void subtraction(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d - %d = %d", a, b, a-b);
}

void multiplication(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d * %d = %d", a, b, a*b);
}

void division(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d / %d = %d", a, b, a/b);
}

void modulus(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d %% %d = %d", a, b, a%b);
}

void square_root(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("sqrt(%d) = %lf", a, sqrt(a));
}

void power(void)
{
    int a, b;
    printf("Enter the base and the exp: ");
    scanf("%d %d", &a, &b);
    printf("%d^%d=%lf", a, b, pow(a,b));
}


int main(void) {
    char operation;
    printf("\nWelcome to my calculator");
    printf("\n\'+\'- addition\n\'-\'- subtraction\n\'*\'- multiplication\n\'/\'- division\n\'%%\'- modulus\n\'s\'- square root\n\'^\'- power of a number\n");
    printf("\nChoose a calculator operation: ");
    scanf("%c", &operation);
    if(operation == '+') {
        addition();
    }
    else if(operation == '-') {
        subtraction();
    }
    else if(operation == '*') {
        multiplication();
    }
    else if(operation == '/') {
        division();
    }
    else if(operation == '%') {
        modulus();
    }
    else if(operation == 's') {
        square_root();
    }
    else if(operation == '^')
    {
        power();
    }
    else {
        printf("Try again");
    }
    return 0;
}
