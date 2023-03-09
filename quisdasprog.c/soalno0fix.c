#include <stdio.h>

struct menumakanan
{
    char makanan[101];
    char keterangan[101];
    unsigned int harga;
};

int main ()
{
    unsigned short n;
    printf("Masukkan jumlah produk : ");
    scanf("%hu", &n);

    unsigned int uang;
    unsigned short menu;
    char enter;
    scanf("%c", &enter);
    printf("Masukkan %hu menu :\n", n);

    struct menumakanan arr[n];
    for(int i=0; i<n; i++)
    {
    
    gets(arr[i].makanan);
    gets(arr[i].keterangan);
    scanf("%u", &arr[i].harga);
    scanf("%c",&enter);
    }

    while(menu !=2){
    printf("\nketik nomor menu:\n");
    printf("1. daftar makanan\n");
    printf("2. exit\n");
    printf(" ketik menu: ");
    scanf("%hu", &menu);
    if(menu==1)
    {
        for (int i = 0; i < n; i++)
        {
        printf("%s - %s - Rp %u\n", arr[i].makanan, arr[i].keterangan, arr[i].harga);
        }
        printf("masukkan uang:");
        scanf("%u", &uang);
        for (int i = 0; i < n; i++)
        {
            if (uang>= arr[i].harga)
            {
                unsigned int kembalian;
                kembalian = uang - arr[i].harga;
                printf("%s Rp %u - kembalian Rp %u\n", arr[i].makanan, arr[i].harga, kembalian);
              
                
            }
            
        }
        
    }
    else if(menu==2){
      printf("Anda keluar");
      break;
    }
    else printf("tidak ada record");}
}

    
    






