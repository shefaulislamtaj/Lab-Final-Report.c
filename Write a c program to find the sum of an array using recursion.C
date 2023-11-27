#include <stdio.h>
int sumArray(int arr[], int size) {
    if (size <= 0) {
        return 0;
    } else {
        return arr[size - 1] + sumArray(arr, size - 1);
    }
}
int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = sumArray(arr, size);
    printf("Sum of array elements: %d\n", sum);
    return 0;
}


