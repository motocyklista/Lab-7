#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[100];  // tablica znaków
    int MAX = 100;     // rozmiar tablicy

    printf("Podaj tekst: ");
    fgets(buffer, MAX, stdin);  

    // Usuń znak nowej linii '\n', jeśli istnieje w buforze fgets
    for (int k = 0; k < MAX; k++) {
        if (buffer[k] == '\n') {
            buffer[k] = '\0';
            break;
        }
        if (buffer[k] == '\0') break;
    }

    int len = strlen(buffer);
    int palindrom = 1;  // zakładamy, że to palindrom
    int i = 0;
    int j = len - 1;

    while (i < j) {
        // Pomijanie spacji
        if (buffer[i] == ' ') { i++; continue; }
        if (buffer[j] == ' ') { j--; continue; }

        // Zamiana dużych liter na małe ręcznie
        char ci = buffer[i];
        char cj = buffer[j];

        if (ci >= 'A' && ci <= 'Z') ci = ci + ('a' - 'A');
        if (cj >= 'A' && cj <= 'Z') cj = cj + ('a' - 'A');

        if (ci != cj) {
            palindrom = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindrom)
        printf("Jest palindromem.\n");
    else
        printf("Nie jest palindromem.\n");

    return 0;
}
