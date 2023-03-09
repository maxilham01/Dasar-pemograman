#include <stdio.h>
#include <string.h>
#define STRSIZ 10
#define MAX 40

typedef struct
{
    char namanya[STRSIZ];
    double diameter;
    int bulan;
    double waktuOrbit, waktuRotasi;
} planet_t;

typedef struct
{
    double diameter;
    planet_t planets[9];
    char galaxy[STRSIZ];
} solar_sys_t;

void simpanText(planet_t *a_planet) {
    FILE  *plan_txt_outp;
    plan_txt_outp = fopen("pl_out.txt", "w");
    fprintf
    (
            plan_txt_outp,
            "%s %e %d %e %e",
            a_planet->namanya,
            &a_planet->diameter,
            &a_planet->bulan,
            &a_planet->waktuOrbit,
            &a_planet->waktuRotasi
    );
    fclose(plan_txt_outp);
}

void simpanBinary(planet_t *a_planet) {
    FILE *plan_bin_outp;
    plan_bin_outp = fopen("pl_out.bin", "wb");
    fwrite(&a_planet, sizeof(planet_t), 1, plan_bin_outp);
    fclose(plan_bin_outp);
}


int main()
{
    planet_t current_planet, previous_planet, blank_planet = {"", 0, 0, 0, 0};
    strcpy(current_planet.namanya, "Jupiter");
    current_planet.diameter = 142800;
    current_planet.bulan = 16;
    current_planet.waktuOrbit = 11.9;
    current_planet.waktuRotasi = 9.925;
    printf("%s's equatorial diameter is %.lf km.\n", current_planet.namanya, current_planet.diameter);
    simpanBinary(&current_planet);
    simpanText(&current_planet);
    return 0;
}