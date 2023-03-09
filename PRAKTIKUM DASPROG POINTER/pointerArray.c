#include <stdio.h>
int main (){
    int arr[5] ={1,2,3,4,5};
    for (int i = 0; i < 5; ++i)
    {
     printf("&arr[%d] => %p\n", i, &arr[i]);
    }
    printf("Adress of arr => %p\n",arr);



    return 0;
}