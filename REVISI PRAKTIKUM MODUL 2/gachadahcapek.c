#include<stdio.h>  
  
int main(){  
    int thn, ttlhari, hari;
    scanf("%d", &thn);
    if(thn >= 2021){
        /*(thn - 2021) TAHUN BIASA (thn - 2021)/4 TAHUN KABISAT  (thn-2021)/100 UNTUK TAHUN AWAL ABAD (thn - 2021)/400 UNTUK TAHUN AWAL ABAD YANG TERMASUK TAHUN KABISAT*/
        ttlhari = (thn - 2021) + (thn - 2021)/4 - (thn-2021)/100 + (thn - 2021)/400;
        hari = ttlhari%7;

            switch (hari){
                case 0: printf("kamis");    break;
                case 1: printf("jumat");    break;
                case 2: printf("sabtu");    break;
                case 3: printf("minggu");   break;
                case 4: printf("senin");    break;
                case 5: printf("selasa");   break;
                case 6: printf("rabu");     break;
            }
    }

    else {
        ttlhari = (2020 - thn) + (2020 - thn)/4 - (2000 - thn)/100 + (2000 - thn)/400;
        hari = ttlhari%7;

        switch (hari){
                case 0: printf("selasa");     break;
                case 1: printf("senin");   break;
                case 2: printf("minggu");    break;
                case 3: printf("sabtu");   break; 
                case 4: printf("jumat");    break;
                case 5: printf("kamis");    break;
                case 6: printf("rabu");    break;
            }
        }

 return 0;
}