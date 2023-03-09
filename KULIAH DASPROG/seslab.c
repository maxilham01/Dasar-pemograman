#include <stdio.h>

int main (){
    int var = 5;
    printf("%d\n",var);
    printf("%p", &var);

    int* p;
    p = &var;
    printf("%p\n", p);
    printf ("%d\n", *p);



    return 0;
}