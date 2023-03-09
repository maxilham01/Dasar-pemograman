#include<stdio.h>
#include<string.h>

struct makanan{
  char namamakanan[1000];
};

int main(){
  int jumlahmakanan, menu;
  char subjudul[1000], *ptr;
  printf("masukkan jumlah makanan ");
  scanf("%d", &jumlahmakanan);

  struct makanan arr[jumlahmakanan];

  for(int i=0; i<jumlahmakanan; i++){
    printf(i+1);
    fflush(stdin);
    gets(arr[i].namamakanan);
  }
  while(1){
    printf("\ndaftar makanan, \n");
    printf("0. print buku\n");
    printf("1. cari buku\n");
    printf("2. exit\n");
    printf(" ketik menu: ");
    scanf("%d", &menu);
    if(menu==1){
      printf("\tketik subjudul buku: ");
      fflush(stdin);
      gets(subjudul);
      for(int i=0; i<jumlah; i++){
        ptr=strstr(arr[i].judul, subjudul);
        if(ptr!=NULL) printf("buku ada: %s\n", arr[i].judul);
      }
    }
    else if(menu==0){
      printf("Judul buku\n");
      for(int i=0; i<jumlah; i++){
        printf("\t%d: %s\n", i+1, arr[i].judul);
      }
    }
    else if(menu==2){
      printf("Anda keluar");
      break;
    }
    else printf("Anda tidak memilih menu dengan benar");}
}