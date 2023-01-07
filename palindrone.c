#include <stdio.h>
#include <string.h>

int main(void) {
    int num, temp, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    temp = num;

    
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    
    if (num == rev) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}










