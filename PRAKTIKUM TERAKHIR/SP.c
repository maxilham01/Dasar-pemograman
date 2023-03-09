#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<a; i++)
    {
        if ( arr[i]%2==0)
        {
            int genap = 2*arr[i]-1;
            printf("%d\n", genap);
        }
        else
        {
            int ganjil = 2*arr[i]+1;
            printf("%d\n", ganjil);
        } 
    }
  return 0;
}