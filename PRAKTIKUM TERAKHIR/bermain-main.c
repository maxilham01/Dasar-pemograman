
#include <stdio.h>
#include <string.h>
char kata[100000];
int countPalindromes(char* kata)
{
    int n = strlen(kata);
    int count = 0;
    for (int i = 0; i < strlen(kata); i++) {
        int left = i - 1;
        int right = i + 1;
        while (left >= 0 && right < n) {
            if (kata[left] == kata[right])
                count++;
            else
                break;
            left--;
            right++;
        }
    }
 
    for (int i = 0; i < strlen(kata); i++) {
        int left = i;
        int right = i + 1;
        while (left >= 0 && right < n) {
            if (kata[left] == kata[right])
                count++;
            else
                break;
            left--;
            right++;
        }
    }
    return count+n;
}
int main()
{
	scanf("%s", kata);
    printf("%d", countPalindromes(kata));
    return 0;
}