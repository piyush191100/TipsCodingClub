#include <stdio.h>

int main(void) {
    int num1, num2;


    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    int i = 0;
    while (i == num1 || i == num2) {
        i++;
    }

    printf("The smallest non-negative integer not equal to %d and %d is %d.\n", num1, num2, i);

    return 0;
}