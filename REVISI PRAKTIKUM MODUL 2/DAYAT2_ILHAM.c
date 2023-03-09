#include <stdio.h>
#include <string.h>

int main (){
    int N, H = 0;
    char S[1005];
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++)
    {
        gets(S);
        for (int j = 0; S[j] != '\0'; j++) //jika perulangan blom sampai flash nol maka perulangan tetap dilanjutkan, flash nol pasti ada di akhiran string 
        {
            if (S[j] ==' ')
            {
                continue;
            }
            else if (S[j] == 'a' || S[j] == 'i' || S[j] == 'u' || S[j] == 'e' || S[j] == 'o')
            {
                H++;
            }
            else
            {
                H = 0;
            }
            if (H == 4)
            {
                printf("Solid Script\n");
                break;
            }    
        }
        if (H < 4)
        {
            printf("Fake Script\n");
        }
        H = 0;
    }
    return 0;
}
