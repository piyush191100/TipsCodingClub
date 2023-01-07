#include <stdio.h>

int main(void) {
    int A, B;
    double G, S;


    printf("Enter the weight of the gold egg (in grams): ");
    scanf("%d", &A);
    printf("Enter the weight of the silver egg (in grams): ");
    scanf("%d", &B);


    printf("Enter the cost of gold (in coins per gram): ");
    scanf("%lf", &G);
    printf("Enter the cost of silver (in coins per gram): ");
    scanf("%lf", &S);


    double value_gold = A * G;
    double value_silver = B * S;


    if (value_gold > value_silver) {
        printf("The gold egg is more valuable.\n");
    } else if (value_gold < value_silver) {
        printf("The silver egg is more valuable.\n");
    } else {
        printf("The gold egg and the silver egg are of equal value.\n");
    }

    return 0;
}