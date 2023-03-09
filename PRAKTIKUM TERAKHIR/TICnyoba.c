#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct menumakanan
{
    char food[1000];
    int harga, stoknya, jumlahnya;
};
struct menumakanan menunya[1000000];
long long int pendapatannya = 0;
bool arrmenu[1000000];

void tambahan (int N, char food[], int harga, int stoknya)
{
    if (arrmenu[N])
    {
        strcpy(menunya[N].food, food);
        menunya[N].harga = harga;
        menunya[N].stoknya = stoknya;
        arrmenu[N] = false;
        printf("Menu added\n");
    }
    else
    {
        printf("Menu alrasy exist\n");
    }
    
}

void delete (int N)
{
    if (!arrmenu[N])
    {
        arrmenu
    }
    


}