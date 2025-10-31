#include <stdio.h>

int main(void) {
    int arr[3] = {10, 30, 2000};
    int *p = arr;   // same as &arr[0]
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, address = %p\n", i, *(p + i), (void*)(p + i));
    }
    return 0;
}
