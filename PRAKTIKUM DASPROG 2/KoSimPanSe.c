#include<stdio.h>
#include<string.h>

struct Benda
{
	char merk[1000];
	int ukuran;
	int keindahan;
	int kualitas;
};

int main(){
	int N, i, j, benar;
	
	scanf("%d", &N); 
    getchar();
	struct Benda arr[N],temp;
	
	for(i = 0; i < N; i++)
    {
		scanf("%s %d %d %d", arr[i].merk, &arr[i].ukuran, &arr[i].keindahan, &arr[i].kualitas);
	}
	
	for(i = 0; i < N; i++)
    {
		for(j = 0; j < N - 1; j++)
		{
			benar = 0;
			
			if(arr[j+1].kualitas > arr[j].kualitas)
			{
				benar = 1;				
			}
			
			if(benar == 0 && arr[j+1].kualitas == arr[j].kualitas)
			{
				if(arr[j+1].keindahan > arr[j].keindahan)
				{
					benar = 1;
				}
			}
			
			if(benar == 0 && arr[j+1].kualitas == arr[j].kualitas && arr[j+1].keindahan == arr[j].keindahan)
			{
				if(arr[j+1].ukuran > arr[j].ukuran)
				{
					benar = 1;
				}
			}
			
			if(benar == 0 && arr[j+1].kualitas == arr[j].kualitas && arr[j+1].keindahan == arr[j].keindahan && arr[j+1].ukuran == arr[j].ukuran)
			{
				if(strcmp(arr[j+1].merk, arr[j].merk) > 0)
				{
					benar = 1;
				}
			}
			
			if(benar == 1)
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(i = 0; i < N; i++)
    {
		printf("%s %d %d %d\n", arr[i].merk, arr[i].ukuran, arr[i].keindahan, arr[i].kualitas);
	}
	
	return 0;
}
