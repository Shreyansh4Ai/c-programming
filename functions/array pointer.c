#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    // Using pointer arithmetic to traverse the array
    for (int i = 0; i < 5; i++) {
        printf("Value at arr[%d] = %d\n", i, *ptr++);
    }

    return 0;
}
