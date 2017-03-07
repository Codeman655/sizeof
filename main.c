#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int *b;
    int c[10];
    float d;
    char e;
    double f;
    short g;
    long h;

    printf( "size of pointer     : %lu\n",sizeof(a));
    printf( "size of int         : %lu\n",sizeof(b));
    printf( "size of array of int: %lu\n",sizeof(c));
    printf( "size of float       : %lu\n",sizeof(d));
    printf( "size of char        : %lu\n",sizeof(e));
    printf( "size of double      : %lu\n",sizeof(f));
    printf( "size of short       : %lu\n",sizeof(g));
    printf( "size of long        : %lu\n",sizeof(h));
}

