#include <stdio.h>
#include <math.h>

void swap(int *a, int *b){
    int temp = *b;
    *b=*a;
    *a= temp;
}

float hitungAkhir(int a, int b){    //passing by value
    return sqrt(a*a + b*b);
}

void Phytagoras(int a, int b, float *c){  //passing by value and reference (for var c)
    *c=sqrt(a*a + b*b);
}

int main() {
    int a, b;
    float c = 0.0;
    scanf("%d %d", &a, &b);
    Phytagoras(a,b, &c);
    swap(&a,&b);
    printf("%d %d %.2f", a, b, c);
    
    return 0;
}
