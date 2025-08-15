#include<stdio.h>
unsigned int reverse_bits(unsigned int n);
int main()
{
    unsigned int result = reverse_bits(4);
    printf("The reversed bits results in the number %d", result);
    return 0;
}
unsigned int reverse_bits(unsigned int n) {
    // find first set bit from MSB
    int j = 0;
    while (j < 32 && (n & (0x80000000u >> j)) == 0) j++;

    int len = 32 - j;                  // number of significant bits
    unsigned int mask = (len == 0) ? 0u : (~0u >> (32 - len));  // len ones safely
    unsigned int num = n & mask;

    unsigned int r = 0;
    for (int i = 0; i < len; ++i) {
        r = (r << 1) | (num & 1u);
        num >>= 1;
    }
    return r;
}

