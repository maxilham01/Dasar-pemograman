#include <stdio.h>

int main ()
{
    /*a:nori
    b:rino
    c:count*/
    int serangan, jeda, a, b, c = 0;
    scanf("%d %d", &serangan, &jeda);
    int N[serangan];
    for (int i = 0; i <= serangan; i++)
    {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < serangan; i++)
    {
        a = (N[i])+ jeda;
        for (int j = i ; j < serangan; j++)
        {
            b = N[j];
            if (a == b) c+=1;
            else if(N[j]-N[i]> jeda) break;
        } 
    }
    printf ("%d", c);
    return 0;
}