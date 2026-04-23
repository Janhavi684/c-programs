//C program-(fibonacci.c)

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c ,i;

    printf("Enter terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: %d %d ", a, b);

    for (int i = 3; i <= n; i++) {
          c = a+b;
          printf("%d ", c);
          a = b;
          b = next;
    }

    return 0;
}
