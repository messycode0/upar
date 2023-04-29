#include <stdio.h>

int main() {
    int size, i, j, k;
    
    printf("Enter the size of the UP ARROW: ");
    scanf("%d", &size);
    
    for (i = size; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * (size - i) + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
