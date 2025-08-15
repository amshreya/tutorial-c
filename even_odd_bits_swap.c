#include<stdio.h>
unsigned int swap_bits(unsigned int n);
int main()
{ 
    unsigned int num, result;
    printf("Enter a number:");
    scanf("%d", &num);
    result = swap_bits(num);
    printf("The swapped bits results in the number %d", result);
    return 0;
}
unsigned int swap_bits(unsigned int n) {
    
    unsigned int r = ((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1);
    return r;
}