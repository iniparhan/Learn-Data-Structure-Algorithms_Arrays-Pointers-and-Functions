#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void koboImaginaryChess(int i, int j, int size, int (*chessBoard)[8]) {

    int sumbu_x[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int sumbu_y[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    for (int k = 0; k < 8; k++) {
        int i_2 = i + sumbu_x[k], j_2 = j + sumbu_y[k];
        if (i_2 >= 0 && i_2 < size && j_2 >= 0 && j_2 < size) {
            chessBoard[i_2][j_2] = 1;
        }
    }
}

int main() {
    int i, j;
    printf("Masukkan angka untuk menempatkan posisi: ");
    scanf("%d %d", &i, &j);

    int size = 8;
    int chessBoard[8][8] = {0};

    koboImaginaryChess(i, j, size, chessBoard);

    // Mencetak papan catur
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", chessBoard[i][j]);
        }
        printf("\n");
    }

    return 0;
}
