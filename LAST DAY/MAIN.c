#include <stdio.h>

int main (){
    //escape sequence
   // printf("\\  %% \t\t\tfinal Report\t\t\t__________\n");


FILE *infilep; 

infilep = fopen("data.txt", "r");
if (infilep == NULL){
printf("Cannot open data.txt for input\n");
return 0;
}
int num;
fscanf(infilep, "%d", &num);
printf("%d", num);

fclose(infilep);



//FILE *outfilep;
//outfilep = fopen("results.txt", "w");
//fprintf(outfilep,"Number = %d\n", num);
return 0;
}