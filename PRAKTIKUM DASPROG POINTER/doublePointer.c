#include <stdio.h>
int main(){
    int var = 23;
    int *ptr = &var;
    int **dbptr = &ptr;
    printf("%d\n",**dbptr);



}