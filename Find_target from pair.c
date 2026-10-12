#include<stdio.h>
void Sum(int arr[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair of elements can make the given sum by the value of index %d and %d", i, j);
                return; 
            }
        }
    }
    printf("No pair can make the given sum.");
}

int main() {
    int arr[] = { 2,11,7,15 };
    int target = 9;

    printf("The given array : ");
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\nThe given sum : %d\n", target);
    Sum(arr, n, target);
    return 0;
}
