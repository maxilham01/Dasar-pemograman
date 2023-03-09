#include <stdio.h>
#include <math.h>

float hitungAkhir(int a, int b){    //passing by value
    a=a+1;
    b=b-1;
    return sqrt(a*a + b*b);
}

void Phytagoras(int a, int b, float *c){  //passing by value and reference (for var c)
    *c=sqrt(a*a + b*b);
    a=a+1;
    b=b+1;
}

int main() {
    int a, b;
    float c = 0.0;
    scanf("%d %d", &a, &b);
    Phytagoras(a,b, &c);
    printf("%d %d %.2f", a, b, c);
    
    return 0;
}
