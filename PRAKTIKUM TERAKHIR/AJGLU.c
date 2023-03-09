#include <stdio.h>
#include <math.h>

int isPrime(int angka1)
{
	int angka2;
	if (angka1 == 2 || angka1 == 3 )
    {
        return 1;
    }       
    if (angka1 <= 1 || angka1 % 2 == 0 ||angka1 % 3 == 0)
    {
         return 0;   
    }		     
    for (angka2 = 5; angka2 * angka2 <= angka1; angka2 += 6)
    {
        if (angka1 % angka2 == 0 || angka1 % (angka2+ 2) == 0)
            return 0;
    }
    return 1;
}

int main()
{
	int N, cekke = 0;;
	scanf("%d", &N);
	
	int a;
	while(N--)
	{
		cekke = 0;
		scanf("%d", &a);
		int arr[a];
		for(int i = 0; i < a; i++)
		{
			scanf("%d", &arr[a]);
			
			if(isPrime(arr[a]))
			{
				cekke++;
				printf("%d ", arr[a]);
			}	
		}
		
		if(cekke != 0)
			{
				printf("\n");
			}
			
		else
		{
			printf("Unable to send Fever Slot Buckle.\n");
		}
	}
}
