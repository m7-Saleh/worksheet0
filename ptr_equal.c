#include <stdio.h>
#include <stddef.h>

int ptr_equal_int(const int *a, const int *b, size_t len) {
    if (!a || !b) return 0;
    for (size_t i = 0; i < len; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main(void) {
    int x[] = {1,2,3,4};
    int y[] = {1,2,3,4};
    int z[] = {1,2,3,5};

    printf("x vs y: %d\n", ptr_equal_int(x,y,4)); 
    printf("x vs z: %d\n", ptr_equal_int(x,z,4)); 
    return 0;
}
#include <stdio.h>
#include <stddef.h>

int ptr_equal_int(const int *a, const int *b, size_t len) {
    if (!a || !b) return 0;
    for (size_t i = 0; i < len; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main(void) {
    int x[] = {1,2,3,4};
    int y[] = {1,2,3,4};
    int z[] = {1,2,3,5};

    printf("x vs y: %d\n", ptr_equal_int(x,y,4)); 
    printf("x vs z: %d\n", ptr_equal_int(x,z,4)); 
    return 0;
}
