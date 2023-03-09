#include <stdio.h>

int main() {
  int N,angka;
  scanf("%d", &N);
  for (int i=0; i<N; i++) {
    scanf("%d", &angka);
    if (angka==140) printf ("NO\n");
    else if (angka < 140) {
      while (angka>0) {
        if (angka % 11 == 0) angka -= 11;
        else if (angka % 15 == 0) angka-= 15;
        else angka -= 26;
      }
      if (angka == 0) printf("YES\n");
      else printf("NO\n");
    }
    else if (angka > 140 ) printf ("YES\n");
    }
}
