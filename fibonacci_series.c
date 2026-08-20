#include <stdio.h>
void fib(int a, int b, int n) {
    if (n == 0) 
    return; 
    printf("%d ", a);
    fib(b, a + b, n - 1); 
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    fib(0, 1, terms);
    return 0;
}
