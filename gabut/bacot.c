#include <stdio.h>

int main (){
    int a;

    scanf("%d", &a );
    if ( a < 10 )
    {
        printf("satuan");
        
    }
    else if (a>9 && a < 100)
    {
        printf("puluhan");
    }
    else if (a>99 && a<1000)
    {
        printf("ratusan");
    }
    else if (a>999 && a<10000)
    {
        printf("ribuan");
    }
    else if (a>9999 && a<100000)
    {
        printf("puluhribuan");
    }
    

return 0;

}