#include <stdio.h>

int main (){
    while(1)
    {   
        int banyakGelas,  banyakPertukaran= 0;
        scanf("%d",&banyakGelas);
        int arr[banyakGelas + 1];
        if(banyakGelas == 0) 
		break;
        for( int i = 0; i < banyakGelas; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(int i = 0; i < banyakGelas - 1; i++)
        {
            for( int j = 0; j < banyakGelas - i - 1; j++)
            {
                if(arr[j] > arr[j + 1])
                {
                    banyakPertukaran++;
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printf("Minimal lakukan %d pertukaran\n", banyakPertukaran);
        for(int i = 0; i < banyakGelas; i++)
		{
            if(arr[i] % 2 != 0 && arr[i] % 5 != 0 && arr[i] % 10 != 0)
			{
                printf("%d ",arr[i]);
            }
            if(arr[i] % 2 == 0)
			{
                printf("Yeay ");
            }
            if(arr[i] % 5 == 0)
			{
                printf("Lulus ");
            }
            if(arr[i] % 10 == 0)
			{
                printf("Dasprog ");
            }
            printf("\n");
        }
        
    }
    
    return 0;
}