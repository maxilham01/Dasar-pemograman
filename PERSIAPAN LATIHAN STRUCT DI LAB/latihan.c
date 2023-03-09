#include <stdio.h>
#include <string.h>

int main ()
{
    int n;
    printf("masukkan jumlah buku :");
    scanf("%d", &n);
    char enter;
    scanf("%c", &enter);
    printf("masukkan %d buku:\n",n);
    char nama[n][100];
    int i;
    for ( i = 0; i < n; i++)
    {
       // scanf("%s", nama [i]);
      fgets(nama[i], sizeof(nama[i]), stdin);   
      nama[i][strlen(nama[i])-1]= '\0';
    }
    printf("\njudul buku\n");
    for ( i = 0; i < n; i++)
    {
             printf("Judul %i: %s\n", i, nama[i]);
       //puts (nama[i]);
    }  
    int cariMenu;
    Menu:
    printf("\nketik nomor menu : \n");
    printf("0. print buku \n");
    printf("1. cari buku \n");
    printf("2. exit\n");
    printf("ketik menu:");
    scanf("%i", &cariMenu);
   switch (cariMenu)
   {
    case 0:
    printf("\njudul buku\n");
    for ( i = 0; i < n; i++)
    {
             printf("Judul %i: %s\n", i, nama[i]);
    }
    goto Menu;
    
    case 1:
    printf("Ketik subjudul buku:");
    scanf ("%s", nama[i]);
    
    printf("buku ada: %s", *judulpanjang);
    goto Menu;

    case 2:
    printf("Anda keluar");
    break;
    default:;

        printf("Anda tidak memilih menu dengan benar");\
    goto Menu;

   }
    
}
    
   
