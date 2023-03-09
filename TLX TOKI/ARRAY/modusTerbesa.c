#include <stdio.h>

int main(){
    int N;
    scanf ("%d", &N);
    int x[1001]={0};
    int data;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &data);
        x[data]++;
    }
    
    int modus;
    int max = 0;
    for (int j = 0; j < 1001; j++)
    {
        if (x[j]>= max)
        {
            max = x[j];
            modus = j;
            

        }
        
    }
    printf("%d", modus);





}