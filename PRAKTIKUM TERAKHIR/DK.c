#include <stdio.h>>

typedef struct 
{
    char nama[100];
    int lintang, bujur;
} lokasi;

int isPrime(int nomor)
{
    int N =1;
    if (nomor == 0 || nomor == 1)
    {
        N = 0;
    }
    else
    {
        for (int i = 2; i <= nomor/2; i++)
        {
            if (nomor % i == 0)
            {
               N = 0;
               break;
            } 
        }  
    }
    return N;
}

int main()
{
    int M, N, O, P;
    scanf("%d %d\n", &M, &N);
    lokasi lokasinya[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%s %dN %dE", lokasinya[i].nama, &lokasinya[i].lintang, &lokasinya[i].bujur);
    }
    for (int i = 0; i < N; i++)
    {
       char find[100];
       scanf("%s", find);
       for (int i = 0; i < M; i++)
       {
         if (strcmp(find ,lokasinya[i].nama) == 0) 
            {
                O = isPrime(lokasinya[i].lintang);
                P = isPrime(lokasinya[i].bujur);
                if (O==1 && P ==1 ) 
                {
                printf("%s aman! Bangunlah Kesatria!\n", lokasinya[i].nama);
                break; 
                }
                else if (O==0 || P ==0) 
                {
                printf("%s tidak aman! Ini pasti ulah Gorgom!\n", lokasinya[i].nama);
                break; 
                }
            }
            else if (i == M-1)
             {
                printf("Tempat apa itu? Kotaro tidak tahu!\n");
             }
       } 
    }
}