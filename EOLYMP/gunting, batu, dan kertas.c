#include <stdio.h>


int main() {
    int test, menang1, menang2, n, i;
    char a, b;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d\n",&n);
        //Jumlah kemenangan untuk pemain pertama menang1 dan untuk pemain kedua menang2 diatur ke nol.
        menang1 = menang2 = 0;
        for (i = 0; i < n; i++)
        {
            //Baca hasil satu putaran permainan dan berikan kemenangan kepada pemain pertama atau kedua. Hasil ronde tidak boleh seri.
            scanf("%c %c\n",&a, &b);
            if ((a == 'R') && (b == 'S')) menang1++;
            if ((a == 'S') && (b == 'R')) menang2++;
            if ((a == 'S') && (b == 'P')) menang1++;
            if ((a == 'P') && (b == 'S')) menang2++;
            if ((a == 'P') && (b == 'R')) menang1++;
            if ((a == 'R') && (b == 'P')) menang2++;
        }
        //print hasil
        if (menang1 > menang2)
        {
            printf("Player 1\n");
        }
        else if (menang1 < menang2)
        {
            printf("Player 2\n");
        }
        else
        {
            printf("TIE\n");
        }
    }
    return 0;
}