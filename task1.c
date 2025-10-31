#include <stdio.h>

int main(void) {
    int n = 41;
    int *ptr_to_n = &n;   // pointer to n
    (*ptr_to_n)++;        // increase value of n using the pointer
    printf("n = %d\n", n);
    return 0;
}

