#include <stdio.h>

// Function to print a 2D array using a pointer
void print_array(int *arr, int width, int height) {
    for (int r = 0; r < height; r++) {          // loop over rows
        for (int c = 0; c < width; c++) {       // loop over columns
            printf("%d ", arr[r * width + c]);  // access each element
        }
        printf("\n"); // new line after each row
    }
}

int main(void) {
    int width = 3;
    int height = 2;
    int data[] = {
        1, 2, 3,
        4, 5, 6
    };

    print_array(data, width, height);
    return 0;
}
