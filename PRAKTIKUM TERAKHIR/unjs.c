#include <stdio.h>

int main (){
    int N;
    long long int poin = 0, saldo, biaya;
    char isBerguna[10];
    scanf("%lld %d", &saldo, &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%s %lld", isBerguna, &biaya);
        if(strcmp(isBerguna, "Iya") == 0)
        {
            saldo -= biaya;
            if(biaya <= 100000) poin += 1;
            else if(biaya > 100000 && biaya <= 500000) poin += 5;
            else if(biaya > 500000 && biaya <= 10000000) poin += 20;
            else if(biaya > 10000000 && 500000000) poin += 35;
            else poin += 50;
        }
        else if(strcmp(isBerguna, "Tidak") == 0)
        {
            saldo -= biaya;
            if(biaya <= 100000) poin -= 1;
            else if(biaya > 100000 && biaya <= 500000) poin -= 5;
            else if(biaya > 500000 && biaya <= 10000000) poin -= 20;
            else if(biaya > 10000000 && 500000000) poin -= 35;
            else poin -= 50;
        }
    }

    if(poin < 0 || saldo <= 0)
    {
        printf("Ujana tidak berakhir bahagia.");
    }
    else if(poin > 0){
        printf("Ujana berakhir bahagia.");
    }
    else{
        printf("Ujana berakhir b aja.");
    }
    return 0;
}