//C program - (Armstrong.c)
#include <stdio.h>

int main() {
    int num, original, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        remainder = num % 10;              // get last digit
        sum = sum + (remainder * remainder * remainder); // cube of digit
        num = num / 10;                   // remove last digit
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
