#include<stdio.h>
#include<string.h>

struct paraPrajurit{
  char namaPrajurit[20];
  char namaPeranan[20];
  int stamina;
};

int main()
{
  int n;
  char namaPrajurit[20], namaPeranan[20];
  scanf("%d", &n);

  struct paraPrajurit arr[n];

  for(int i=0; i<n; i++)
  {
    scanf("%s", arr[i].namaPrajurit);
    scanf("%s", arr[i].namaPeranan);
    scanf("%d", &arr[i].stamina);
  }

  scanf("%s", namaPrajurit);
  scanf("%s", namaPeranan);

  for(int i=0; i<=n; i++)
  {
    if(i==n) 
    {
        printf("Prajurit %s sebagai %s tidak terdapat pada basis data!", namaPrajurit, namaPeranan);
    }
    else if(strcmp(namaPrajurit, arr[i].namaPrajurit)==0)
    {
      if(strcmp(namaPeranan, arr[i].namaPeranan)==0)
      {
        if(arr[i].stamina==0) 
        {
          printf("Yah, prajurit %s sudah tumbang sebagai %s :(", namaPrajurit, namaPeranan);
          break;
        }
        else 
        {
          printf("Prajurit %s masih berjuang sebagai %s dengan %d stamina!", namaPrajurit, namaPeranan, arr[i].stamina);
          break;
        }
      }
    }
  }
  return 0;
}