#include <stdio.h>

struct Makanan
{
    char Nama[101];
    char Keterangan[101];
    unsigned int Harga;
};

int main()
{
    unsigned short Jumlah_produk;
    printf("Masukkan jumlah produk : ");
    scanf("%hu", &Jumlah_produk);

    char enter;
    scanf("%c", &enter);
    printf("Masukkan %hu menu :\n", Jumlah_produk);

    struct Makanan Produk[Jumlah_produk];

    for(int i = 0; i < Jumlah_produk; i++)
    {
        gets(Produk[i].Nama);
        gets(Produk[i].Keterangan);
        scanf("%u", &Produk[i].Harga);
        scanf("%c", &enter);
    }

    unsigned int uang;
    printf("Masukkan nominal uang : ");
    scanf("%u", &uang);

    unsigned short menu = 0;
    while(menu != 3)
    {
        printf("\n\n");
        printf("Pilih Perintah :\n");
        printf("1. Daftar Makanan\n");
        printf("2. Beli\n");
        printf("3. Keluar\n");
        printf("Ketik Perintah : ");
        scanf("%hu", &menu);

        if(menu == 1)
        {
            printf("\n\nDaftar Menu\n");
            for(int i = 0; i < Jumlah_produk; i++)
                {
                    printf("%s - %s - Rp %u\n", Produk[i].Nama, Produk[i].Keterangan, Produk[i].Harga);
                }
        }
        else if(menu == 2)
        {
            printf("\n\nUang Customer : Rp %u\n", uang);

            for(int i = 0; i < Jumlah_produk; i++)
            {
                if(uang >= Produk[i].Harga)
                {
                    unsigned int kembalian;
                    kembalian = uang - Produk[i].Harga;
                    printf("%s Rp %u - kembalian Rp %u\n", Produk[i].Nama, Produk[i].Harga, kembalian);
                }
            }
        }
        else if(menu == 3) printf("\n\nProgram Berakhir");
    }
}