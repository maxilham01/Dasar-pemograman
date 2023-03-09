#include <stdio.h>

int main (){
    int A, B;
    scanf("%d %d", &A, &B);
    int matriks[100][100];
    for (int  i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
        
    }
    for (int i = 0; i < B; i++)
    {
        for (int j = A-1; j >= 0; j--)
        {
           
                printf("%d ", matriks[j][i]);
        }
           printf("\n");
   
    }
    



return 0;

}