#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long int ll;
typedef unsigned long long int ull;

typedef struct {
    char lokasi[20];
    char N[10];
} bombsite;

typedef struct {
    char nama[20];
    int watch_site;
} anarchist;

int searchBomb(bombsite alqaeda[], char site[]) {
    int i = 0;
    int flag = 1;
    while(flag) {
        if (strcmp(alqaeda[i].lokasi, site) == 0) {
            flag = 0;
            return i;
        }
        i++;
    }
    return 0;
}

int searchTerrorist(anarchist terrorist[], char person[]) {
    int i = 0;
    int flag = 1;
    while(flag) {
        if (strcmp(terrorist[i].nama, person) == 0) {
            flag = 0;
            return i;
        }
        i++;
    }
    return 0;
}

int main() {
    int T; scanf("%d",&T);
    bombsite locations[100];
    anarchist terrorist[100];
    char command[10];
    int manyAlqaeda = 0;
    int manyTerrorist = 0;
    scanf("%s", command);
    while(T--) {
        // printf("masuk\n");
        // SET AMAN
        if (strcmp(command,"set")==0) {
            char next[20];
            scanf("%s",next);
            
            // Input pembantu ada dimana
            // SUCCESS MASUK
            if (next[0] == '*') {
                scanf("%s", terrorist[manyTerrorist].nama);
                // printf("%s", terrorist[manyTerrorist].nama);
                char trap; scanf("%s",&trap);
                char lokasiInput[20];
                scanf("%s", lokasiInput);
                terrorist[manyTerrorist].watch_site = searchBomb(locations,lokasiInput);
                manyTerrorist++;
            // Input lokasi ada berapa bomb
            } else {
                scanf("%s",locations[manyAlqaeda].N);
                strcpy(locations[manyAlqaeda].lokasi,next);
                // printf("%s",locations[manyAlqaeda].lokasi);
                manyAlqaeda++;
            }
            // printf("set worked!\n");
        } else if (strcmp(command,"chg")==0) {
            char next[20]; scanf("%s",next);
            if (strcmp(next,"*")==0) {
                char nama[20]; scanf("%s",nama);
                char N[10]; scanf("%s",N);
                // Ubah tempat pembantu
                if (N[0] == '&') {
                    char L[20]; scanf("%s",L);
                    int indexTerrorist = searchTerrorist(terrorist,nama);
                    int indexBombsite = searchBomb(locations, L);
                    terrorist[indexTerrorist].watch_site = indexBombsite;
                // Ubah bomb yang ada di lokasi pembantu
                } else {
                    int indexTerrorist = searchTerrorist(terrorist,nama);
                    strcpy(locations[terrorist[indexTerrorist].watch_site].N,N);
                }
            } else {
                int indexBombsite = searchBomb(locations, next);
                scanf("%s",locations[indexBombsite].N);
            }        
            // printf("chg worked!\n");
        } else if (strcmp(command, "get")==0) {
            char trap[20]; scanf("%s",trap);
            // printf("%s",trap);
            char nama[20]; scanf("%s",nama);
            int indexTerrorist = searchTerrorist(terrorist, nama);
            int indexBombsite = terrorist[indexTerrorist].watch_site;
            printf("%s\n",locations[indexBombsite].N);
        }
        // printf("%d",T);
        scanf("%s", command);
    }
}
