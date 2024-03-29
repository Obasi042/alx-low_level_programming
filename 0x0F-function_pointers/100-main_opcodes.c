#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    
    int num_bytes = atoi(argv[1]);
    
    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }
    
    printf("The opcodes of the main function are:\n");
    
    unsigned char *ptr = (unsigned char *)main;
    
    for (int i = 0; i < num_bytes; i++) {
        printf("%02x ", ptr[i]);
    }
    
    printf("\n");
    
    return 0;
}
