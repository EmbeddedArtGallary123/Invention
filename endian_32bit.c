
/*
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

*/


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void endian(int *x)

{
    //printf("Converting\n");
    
    *x = ((*x & 0x000000FF) << 24) | ((*x & 0x0000FF00) << 8) | ((*x & 0x00FF0000) >> 8) | ((*x & 0xFF000000) >> 24);
}

void check_endian(char *tmp, int n, char *ch)
{
    if (*ch)
    {
        printf("Little endian = %x\n", *ch);
    }else{
        printf("Big Endian\n");
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%.2x", tmp[i]);
        printf("\n");
    }
   
}

int main()
{
    int x = 0x12345678;
    int a = 1;
    char *ch = (char*)&a; 
    printf ("%x\n", x);
    
    if (*ch)
    {
        printf("Little endian = %x\n", *ch);
    }else{
        printf("Big Endian = %x\n", *ch);
    }
   
    //check_endian((char*)&x, sizeof(x), (char*)&a );
    
    endian(&x);
    printf ("%x\n", x);
   // check_endian((char*)&x, sizeof(x), (char*)&a );
    
    //printf ("%x", x);
    return 0;
}



