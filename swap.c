#include <stdio.h>

int main()
{
    int a = 5, b = 2;

    printf("Before swap a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After swap a = %d, b = %d\n", a, b);

    return 0;
}
