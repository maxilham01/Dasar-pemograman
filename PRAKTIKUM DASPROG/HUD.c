#include <stdio.h>

int N, S, x[21], min = 20;

void jumlahduitnyasama (int cekKe, int total, int jumlahKe)
{
    if(cekKe < N && total < S) 
    {
        jumlahduitnyasama(cekKe+1,total,jumlahKe) ;
        jumlahduitnyasama(cekKe+1, total+x[cekKe+1], jumlahKe+1) ;
    }
    else if(cekKe<=N && total==S && jumlahKe < min)
    {
      min = jumlahKe ;
    }

}
int ambilbanyakKMI(int N, int S)
{
    for (int i = 1; i <= N ; i++)
    {
        scanf("%d", &x[i]);
    }
    jumlahduitnyasama(0,0,0);
    return min ;
}

int main ()
{
    scanf("%d %d", &N, &S);
    printf("%d",ambilbanyakKMI(N,S));
    return 0;
}