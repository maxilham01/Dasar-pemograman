#include<stdio.h>
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