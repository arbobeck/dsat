#include <stdio.h>

int main() {
    int n, i, first = 0, second = 1, next;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    printf("Fibonacci sequence of length %d:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
