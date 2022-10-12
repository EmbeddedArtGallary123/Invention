#include <stdio.h>

void endian(int *x)

{
    
    //*x = ((*x & 0x000000FF) << 24) | ((*x & 0x0000FF00) << 8) | ((*x & 0x00FF0000) >> 8) | ((*x & 0xFF000000) >> 24);
    
    
    
    
}

int main()
{
    int x = 0x12345678;
    printf ("%x\n", x);
    endian(&x);
    printf ("%x", x);
    return 0;
}
