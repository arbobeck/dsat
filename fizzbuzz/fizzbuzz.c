#include <stdio.h>

void fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}

int main() {
    int n;

    printf("Enter a number to count until: ");
    if (scanf("%d", &n) == 1) {
        fizzbuzz(n);
    } else {
        printf("Please enter a valid integer.\n");
    }

    return 0;
}
