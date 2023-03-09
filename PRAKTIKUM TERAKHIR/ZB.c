#include <stdio.h>

long long cekke(long long int i , long long int j)
{
    if(j==0)
    {
        return i ; 
    }
    return cekke(j,i%j) ; 
}

long long powermodulo(long long int K,  long long int  L , long long int modulo)
{
    if(L==0)
    {
        return 1 ; 
    }
    long long  y = powermodulo(K,L/2,modulo);
    y = (y*y)%modulo ; 
    if(L&1)
    {
        y = (K*y)%modulo ; 
    }
    return y;  
}

int main()
{  
    long long int  A , B ; 
    long long int hasil = 0 ; 
    long long int modulo = 1000000007;
    scanf("%lld %lld", &A, &B); 
    for(int i = 0 ; i < A ; ++i)
    {
        hasil = (hasil + powermodulo(B,cekke(i,A),modulo))%modulo ; 
    }
    hasil = (hasil*powermodulo(A,modulo-2,modulo))%modulo;  
     printf("%lld", hasil); 
    return 0 ; 

}


