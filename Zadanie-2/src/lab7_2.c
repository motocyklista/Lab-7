#include <stdio.h>

int main(void) {
    int R, C;

    // Wczytanie liczby wierszy i kolumn
    if (scanf("%d %d", &R, &C) != 2 || R < 1 || C < 1) {
        printf("BLAD DANYCH WEJSCIOWYCH\n");
        return 1;
    }

    // Tworzenie macierzy o zmiennym rozmiarze (VLA)
    int matrix[R][C];

    // Wczytanie elementów macierzy
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("BLAD DANYCH WEJSCIOWYCH\n");
                return 1;
            }
        }
    }

    // Wypisanie macierzy transponowanej
    for (int j = 0; j < C; j++) {
        for (int i = 0; i < R; i++) {
            printf("%d", matrix[i][j]);
            if (i != R - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
