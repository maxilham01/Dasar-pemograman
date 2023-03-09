#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct listMenu
{
	char nama[100];
	int harga; 
	int stok;
	int jumlah;
};

struct listMenu menu[1000001];
long long pendapatan = 0;
bool arr[1000001];

void tambahan(int N, char nama[], int harga, int stok)
{
	if(arr[N])
	{
		strcpy(menu[N].nama, nama);
		menu[N].harga = harga;
		menu[N].stok = stok;
		arr[N] = false;
		printf("Menu added\n");
	} else 
	{
		printf("Menu already exist\n");
	}
}

void hapus(int N)
{
	if(!arr[N])
	{
		arr[N] = true;
		printf("Menu removed\n");
	} 
	else 
	{
		printf("Menu does not exist\n");
	}
}

void info(int N)
{
	if(!arr[N])
	{
		printf("#%d %s\nPrice : Rp%d\nStock : %dx\n\n", N, menu[N].nama, menu[N].harga, menu[N].stok);
	} 
	else 
	{
		printf("Menu does not exist\n");
	}
}

void pesan(int N, int jumlah)
{
	if(!arr[N])
	{
		if(jumlah == 0)
		{
			printf("So you want to order or what\n");
		} 
		else if(menu[N].stok >= jumlah)
		{
			pendapatan += menu[N].harga*jumlah;
			menu[N].stok -= jumlah;
			printf("Ordered %dx %s for Rp%d\n", jumlah, menu[N].nama, menu[N].harga*jumlah);
		} 
		else 
		{
			printf("Apologize, the stock is not enough\n");
		}
	} 
	else 
	{
		printf("Menu does not exist\n");
	}
}

void diskon(int N, int disk)
{
	if(!arr[N])
	{
		menu[N].harga *= 1-((double) disk/100);	
		printf("Discount added\n");
	} 
	else 
	{
		printf("Menu does not exist\n");
	}
}

void keluar()
{
	printf("Earnings: Rp%d\nInformatics canteen is closing... thanks for the visit!\n", pendapatan);
}

int main()
{
	memset(arr, true, 1000001*sizeof(arr[0]));
	while(true)\
	{
		int N;
		char perintah[50];
		scanf("%s", perintah);

		if(strcmp("ADD", perintah) == 0)
		{
			int harga, stok;
			char nama[100];
			scanf("%d", &N);
			getchar();
			fgets(nama, 100, stdin);
			scanf("%d %d", &harga, &stok);
			nama[strlen(nama)-1] = '\0';
			tambahan(N, nama, harga, stok);
		} 
		else if(strcmp("REMOVE", perintah) == 0)
		{
			scanf("%d", &N);
			hapus(N);
		} 
		else if(strcmp("INFO", perintah) == 0)
		{
			scanf("%d", &N);
			info(N);
		} 
		else if(strcmp("ORDER", perintah) == 0)
		{
			int jumlah;

			scanf("%d %d", &N, &jumlah);
			pesan(N, jumlah);
		} 
		else if(strcmp("DISC", perintah) == 0)
		{
			int disc;
			scanf("%d %d", &N, &disc);
			diskon(N, disc);
		} 
		else if(strcmp("CLOSE", perintah) == 0)
		{
			keluar();
			break;
		} 
		else 
		{
			printf("Unknown command\n");
		}
	}
}