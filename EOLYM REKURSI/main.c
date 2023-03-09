
/*#include<stdio.h>
#include<string.h>
#define STRSIZ 10

typedef struct{
    char nama[STRSIZ];
    double diameter;
    int moons;
    double orbit_time, rotation_time;
}planet_t;

typedef struct 
{
    double diameter;
    planet_t planets[9];
    char galaxy[STRSIZ];
} solar_sys_t;


int main (){
    planet_t current_planet, previous_planet, blank_planet;

    strcpy(current_planet.nama, "Jupiter");
    current_planet.diameter = 142800;
    current_planet.moons = 16;
    current_planet.orbit_time = 11.9;
    current_planet.rotation_time = 9.925;

    printf("%s's equatorial diameter is%.lf km.\n", current_planet.nama, current_planet.diameter);
    
}

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
*/
#include<stdio.h>
#include<string.h>
#define strsiz = 10



typedef union {
    int wears_wig;
    char color[20];
} hair_t;



typedef struct {
    int bald;
    hair_t h;
} hair_info_t;


void print_hair_info(hair_info_t hair){
    if (hair.bald) {
        printf("Subject is bald");
    if (hair.h.wears_wig)
        printf(", but wears a wig.\n");
    else
        printf(" and does not wear a wig.\n");
    } else {
        printf("Subject's hair color is %s.\n", hair.h.color);
    }
}



int main (){
    hair_info_t mario;
    mario.bald = 1;
    mario.h.wears_wig = 0;
    print_hair_info(mario);

}