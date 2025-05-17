#include <stdio.h>

int main() {
    int arr[5][5];

    // Set every element to 10
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            arr[i][j] = 10;
        }
    }

    // Print the matrix
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]); // Print value, not address
        }
        printf("\n");
    }

    return 0;
}
