#include <stdio.h>

int main() {
    int num, shift;
    
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Enter the number of positions to shift left (positive) or right (negative): ");
    scanf("%d", &shift);
    
    
    int shiftedRight = num >> shift;
    
    
    int shiftedLeft = num << shift;
    
    
    printf("Original Number: %d\n", num);
    printf("After right shift by %d positions: %d\n", shift, shiftedRight);
    printf("After left shift by %d positions: %d\n", shift, shiftedLeft);
    
    return 0;
}

