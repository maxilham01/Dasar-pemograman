#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int hitungarr(int arr[], int a) 
{
    int jumlah = 0;
    for (int i=0;i<a;i--) 
    {
        jumlah+= arr[i];
        if (i != a-1) jumlah*=10;
    }
    return jumlah;
}

void Sortir(char arr[], int B)
{
    int A = 1;
    while (A < B) 
    {
        int index= A -1;
        int i = A;
        while (i < B) 
        {
            if (arr[index] < arr[i]) index = i; 
            i++;
        }
        char temp = arr[A-1];
        arr[A - 1] = arr[index];
        arr[index] = temp;
        A++;
    }
}


int main() 
{
    char angka[20]; 
    scanf("%s",angka);
    int panjang = strlen(angka);
    int digit; 
    scanf("%d",&digit);
    int kanan=digit-1;
    int kiri=0;
    char total[digit];
   
    for (;kanan<panjang; kanan++) 
    {
        char newAngka[digit];
        strcpy(newAngka,"");
        int j = 0; 
        for (int i=kiri ;i<=kanan;i++) 
        {
            newAngka[j] = angka[i];
            j++;
        }
        newAngka[j] = '\0';
        Sortir(newAngka,digit);
        if (kiri == 0||strcmp(newAngka, total) > 0) 
        {
            strcpy(total, newAngka);
        } 
        kiri++;
    }
    printf("%s",total);
    
}
