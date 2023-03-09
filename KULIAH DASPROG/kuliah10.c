#include <stdio.h>

void cetak(int n){
    for(int j=0;j<n;j++){
        for(int i=0;i<=j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    cetak(n);
    scanf("%d", &n);
    printf("%d\n", n);
    cetak(n);
    return 0;
}
