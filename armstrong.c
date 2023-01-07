#include <stdio.h>
#include <math.h>

int main(void) {
    int num, temp, digit, sum = 0, digits = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    temp = num;

    
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    
    temp = num;

    
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (num == sum) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}