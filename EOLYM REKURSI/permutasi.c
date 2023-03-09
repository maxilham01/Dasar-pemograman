#include <stdio.h>
#include <string.h>
#include <stdbool.h>

    bool N[9];

    void permutasi(int M,int cekke,int print[])
    {
        if(cekke <= M)
        {
            for (int i = 1; i <= M; i++)
            {

                if(N[i] == true)
                {
                    N[i] = false;
                    print[cekke] = i;
                    if(cekke+1 == M)
                    {
                        for(int j = 0; j < M; j++)
                        {
                            printf("%d ", print[j]);
                        }
                        printf("\n");
                    }
                    permutasi(M,cekke+1,print);
                    N[i] = true;
                    print[cekke] = 0;
                }
            }
        }
    }

    int main() 
    {
        int M;
        scanf("%d", &M);
        int print[M];
        memset(N, true, M+1 );;
        permutasi(M, 0, print);    
    }