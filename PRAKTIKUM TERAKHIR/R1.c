#include <stdio.h>
#include <math.h>
#include <string.h>

int totalPlayer; 
int Winner = 0;
int max_Point;
int A; 
int main() {
    scanf("%d",&totalPlayer);
    char nama[totalPlayer][100]; 
    for (int i=0;i<totalPlayer;i++) 
    {
        scanf("%s",nama[i]);
        scanf("%d",&A);
        int baris[A];
        int maxI = -1000;
        int max = 0;

        for (int j=0;j<A;j++) 
        {

            scanf("%d",&baris[j]);

            max += baris[j];

            if (maxI < max) 
            {
                maxI = max;
            }

            if (max < 0) 
            {
                max = 0;
            }
        }

        if (i == 0) max_Point = maxI;
        if (max_Point < maxI) 
        {
            max_Point = maxI;
            Winner = i;
        }
    }
    printf("%s\n",nama[Winner]);
    

}
