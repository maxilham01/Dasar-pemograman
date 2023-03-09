#include <stdio.h>
#include <string.h>
#define STRSIZ 10

typedef struct {
    int degree;
    char direction;
} long_lat_t;

typedef struct 
{
    char place[STRSIZ];
    long_lat_t longitude, latitude;
}location_t;

int main (){
   location_t resort;
    strcpy(resort.place, "panas");
    resort.latitude.degree = 2;
    strcpy(resort.latitude.direction, "N");
    resort.latitude.degree = 3;

}