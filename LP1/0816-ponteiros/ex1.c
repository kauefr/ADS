//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int a = 10;
    int *pa = &a;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&pa = %p, pa = %p, *pa = %d\n\n", &pa, pa, *pa);

    *pa = 42;
    printf("&a = %p, a = %d\n", &a, a);
    printf("&pa = %p, pa = %p, *pa = %d\n\n", &pa, pa, *pa);
    
    int v[5];
    for(int i=0; i<5; i++)
    {
        printf("&v[%d] = %p ", i, &v[i]);
    }
    printf("\n\n");

    struct 
    {
        int a;
        int b;
        int c;
    } s[5];
    for(int i=0; i<5; i++)
    {
        printf("&s[%d].a = %p,  &s[%d].b = %p, &s[%d].c = %p\n", i, &s[i].a, i, &s[i].b, i, &s[i].c);
    }
    return 0;
}
