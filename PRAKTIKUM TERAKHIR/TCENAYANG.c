#include <stdio.h>
#include <string.h>

struct database
{
    char nama[50], namaSahabat[50], nomorTelpon[50], nomorTelponSahabat[50];
    int umur, umurSahabat;
};

int main ()
{
    int a, b;
    scanf("%d", &b);
    struct database orangnya[100];
	int i = 0, j = 0, k = 0, arr[100];
	char kota [50][50];
    while (i != b)
    {
        scanf("%s%d", kota[i], &a);
        while (j != a)
        {
            scanf("%s%d%s", orangnya[k].nama, &orangnya[k].umur, orangnya[k].nomorTelpon);
            j+=1;
			k+=1;
        }
        arr[i] = k;
		j=0;
		i+=1;
        
    }
	i = 0;
    while (i!=k)
    {
        orangnya[i].namaSahabat[0] = '\0'; 
		i+=1;
    }
	int p;
    scanf("%d", &p);
	char sahabat1[100], sahabat2[100];
	i = 0, j = 0;
	int z = 0;
	while (i!=p)
    {
		scanf("%s%s", sahabat1, sahabat2);
		while(j!=k)
        {
			if(strcmp(sahabat1, orangnya[j].nama) == 0){
				while(z!=k)
                {
					
					if(strcmp(sahabat2, orangnya[z].nama) == 0){
						strcpy(orangnya[j].namaSahabat, orangnya[z].nama);
						orangnya[j].umurSahabat = orangnya[z].umur;
						strcpy(orangnya[j].nomorTelponSahabat, orangnya[z].nomorTelpon);
						break;
					}	
					z+=1;
				}
				break;
				
			}
			j+=1;
		}
		z=0;
		j=0;
		i+=1;
	}
	i = 0, j = 0;
	while(i!=b)
    {
		printf("%s\n", kota[i]);
		while(j != arr[i])
        {
			
			printf("Name: %s\n", orangnya[j].nama);
			printf("Age: %d\n", orangnya[j].umur);
			printf("Phone Number:%s\n", orangnya[j].nomorTelpon);
			if(strlen(orangnya[j].namaSahabat) != 0){
				printf("His/Her bestie is: %s\n", orangnya[j].namaSahabat);
				printf("His/Her contact info is as follows\n");
				printf("Name: %s\n", orangnya[j].namaSahabat);
				printf("Age: %d\n", orangnya[j].umurSahabat);
				printf("Phone Number:%s\n", orangnya[j].nomorTelponSahabat);	
			}else{
				printf("His/Her bestie is: No one\n");
			}
			j+=1;
		}
		printf("\n");
		i+=1;
	}
	return 0;
}