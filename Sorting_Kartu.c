#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nilaiKartu(char kartu[]) {
    if (strcmp(kartu, "J") == 0) return 11;
    if (strcmp(kartu, "Q") == 0) return 12;
    if (strcmp(kartu, "K") == 0) return 13;
    return atoi(kartu); 
}

int main() {

    int banyak_angka;
    printf("Masukkan Banyaknya angka: ");
    scanf("%d", &banyak_angka);

    char kartu[banyak_angka][3]; 
    for(int i = 0; i < banyak_angka; i++) {
        scanf("%s", kartu[i]); 
    }

    int langkahPertukaran = 0;

    for(int i = 0; i < banyak_angka; i++) {

        int angka_terkecil = i;
        for(int j = i+1; j < banyak_angka; j++) {
            if(nilaiKartu(kartu[j]) < nilaiKartu(kartu[angka_terkecil])) {
                angka_terkecil = j;
            }
        }

        if (angka_terkecil != i) {
            char temp[3];
            strcpy(temp, kartu[i]);
            strcpy(kartu[i], kartu[angka_terkecil]);
            strcpy(kartu[angka_terkecil], temp);
            langkahPertukaran++;

            printf("\nPertukaran %d: ", langkahPertukaran);
            for (int L = 0; L < banyak_angka; L++)
            {
                printf("%s ", kartu[L]);
            }
        }
    }

    printf("\n\nJumlah langkah pertukaran: %d\n", langkahPertukaran);
    return 0;
}

