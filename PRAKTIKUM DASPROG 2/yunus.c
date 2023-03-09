#include <stdio.h>
#include <string.h>

struct yunus
{
    int N;
    int S;
    int banyakuang[21];
};

int main (){
    int a, b;
    scanf ("%d %d", &a, &b);
    struct yunus arr[a];

   for (int i = 1; i <= a ; i++)
    {
        scanf("%d", &arr[i].S);
        for (int j = 0; j <= arr[i].S; j++)
        {
            scanf("%d", &arr[i].banyakuang[j]);
        }
        
    }
    
    char d[20];
    int banyakke,jml;
    int ulang = 1;

    for(int i = 1; i <= a; i++)
        arr[i].N = 0;

    do
    {
        scanf("%s", d);
        if(strcmp(d,"tampilkan") == 0) break;
        scanf("%d %d", &banyakke, &jml );
        for(int i = 1; i <= a; i++)
        {
            int cpt = 0;
            for(int j = 0; j<arr[i].banyakuang;j++)
            {
                if(arr[i].banyakuang[j] == banyakke)
                {
                    arr[i].N += jml;
                    cpt = 1;
                    break;
                }
            if(cpt == 1) break;
            }
        }
    } while (strcmp(d,"tampilkan") != 0);

    for(int i = 1; i <= a; i++)
    {
    
        printf("%d: %d\n", i, arr[i].N);

    
    



    }
    return 0;
}