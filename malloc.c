#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    
    uint16_t *ptr = (uint16_t*)malloc(sizeof(uint16_t) * 5);
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        ptr[i] = 2*i;
        printf("%d\n", ptr[i]);
    }

    ptr = (uint16_t*)realloc(ptr, sizeof(uint16_t) * 10);
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        free(ptr);  // Always free allocated memory before exiting
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        ptr[i] = 2*i;
        printf("%d\n", ptr[i]);
    }
    
    free(ptr);
    return 0;
}
