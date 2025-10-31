#include <stdio.h>

int main(void) {
    
    FILE *f = fopen("foo.txt", "r");
    if (!f) {
        perror("fopen");   
        return 1;
    }

    long long sum = 0;  
    long long x;        

    
    while (fscanf(f, "%lld", &x) == 1) {
        sum += x;
    }

    fclose(f);  
    printf("sum = %lld\n", sum);  

    return 0;
}
