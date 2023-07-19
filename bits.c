// Online C compiler to run C program online
#include <stdio.h>

void endian(unsigned int x)
{
    char *ptr = (char *)&x;
    if (*ptr )
    {
        printf("endian: little\n");
    } else {
        printf ("endian: Big\n");
    }
}
void print_bits(unsigned int x)
{
    int i;
     printf("printing bits:\n");
    for (i = 31; i >= 0; --i)
    {
        unsigned int mask = 1 << i;
        x & mask? printf("1"): printf("0");
        if (i % 8 == 0)
        {
            printf(" ");
        }
    }
    printf("\n");
}
void reverce_bits (unsigned int n)
{
    unsigned int i;
    unsigned int rev_bits;
    printf("printing reverce bits:\n");
    for (int i = 15; i >=0; i--){
    rev_bits |= (n & 1)
    if (i%4 == 0)
    printf(" ");
    }
    
        if (i % 8 == 0)
        {
            printf(" ");
        }
    printf("\n");
}
void rev_bytes(unsigned int n)
{
    printf("printing reverce bytes:\n");
    n = ((n & 0x000000FF) << 24) | ((n & 0x0000FF00) << 8) |( (n & 0x00FF0000) >> 8) | ((n & 0xFF000000) >>24) ;
    print_bits(n);
}
void set_clear_bit(unsigned int x)
{
    printf("printing set bits:\n");
    unsigned int set;
    unsigned int bits_position = 2;
    set = x | (1 << bits_position);
    print_bits(set);
    printf("printing clear bits:\n");
    unsigned int clear;
    unsigned int bit_position = 3;
    clear  =  x & ~(1 << bit_position);
    print_bits(clear);
    unsigned int togle;
    unsigned int bit_pos = 10;
    togle = x ^ (1 << bit_pos);
}
int main() {
   unsigned int x = 10;
   endian(x);
   print_bits(x);
   reverce_bits(x);
   rev_bytes(x);
   set_clear_bit(x);
    return 0;
}










