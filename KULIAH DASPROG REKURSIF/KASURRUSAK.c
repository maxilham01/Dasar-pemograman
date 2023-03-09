#include <stdio.h>
#include <string.h>
void polindrom(char *str, int a, int b)
{
    if (str[a]==str[b])
    {
        if (a == b || a+1 ==b)
        {
            printf("YA");
        }
        else{
            polindrom(str, a+1, b-1 );
        }
    }else
    {
        printf("BUKAN");
    }
}
int main (){
  char kata [100];
  scanf("%s", kata);
  int b = strlen(kata)-1;
  polindrom(kata, 0, b);
  return 0;
}