#include <stdio.h>

int main(void) {
    char operation;
        printf("\nWelcome to my calculator");
        printf("\n\'+\'- addition\n\'-\'- subtraction\n\'*\'- multiplication\n\'/\'- division\n\'%%\'- modulus\n\'s\'- square root\n\'^\'- power of a number\n");
        printf("\nChoose a calculator operation: ");
        scanf("%c", &operation);
    return 0;
}
