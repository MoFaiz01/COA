#include <stdio.h>
#include <stdint.h>

// Function to perform circular shift left
uint32_t circularShiftLeft(uint32_t num, int shift) {
    int bits = sizeof(num) * 8; // Number of bits in the number
    shift = shift % bits;      // Handle cases where shift > bits
    return (num << shift) | (num >> (bits - shift));
}

// Function to perform circular shift right
uint32_t circularShiftRight(uint32_t num, int shift) {
    int bits = sizeof(num) * 8; // Number of bits in the number
    shift = shift % bits;      // Handle cases where shift > bits
    return (num >> shift) | (num << (bits - shift));
}

int main() {
    uint32_t num;
    int shift;

    // Input from the user
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter the number of positions to shift: ");
    scanf("%d", &shift);

    // Perform circular shift left
    uint32_t resultLeft = circularShiftLeft(num, shift);
    printf("Result of circular shift left: %u\n", resultLeft);

    // Perform circular shift right
    uint32_t resultRight = circularShiftRight(num, shift);
    printf("Result of circular shift right: %u\n", resultRight);

    return 0;
}
