// Deadline tgl 19
// jam 11.59 pm

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void koboImaginaryChess(int i, int j, int size, int (*chessBoard)[8]) {
    // Inisialisasi posisi yang mungkin dilalui oleh bidak kuda
    int horizontal[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int vertikal[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    // Menandai setiap posisi yang mungkin dilalui oleh bidak kuda dengan 1
    for (int k = 0; k < 8; k++) {
        int ni = i + horizontal[k], nj = j + vertikal[k];
        if (ni >= 0 && ni < size && nj >= 0 && nj < size) {
            chessBoard[ni][nj] = 1;
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



// #include <stdio.h> // Baris ini mengimpor file header standar input-output.

// void koboImaginaryChess(int i, int j, int size, int (*chessBoard)[8]) { 
//     // Mendefinisikan fungsi dengan nama 'koboImaginaryChess' yang menerima empat parameter: dua integer i dan j yang merupakan posisi bidak kuda, satu integer size yang merupakan ukuran papan catur, dan satu pointer ke array 2D yang merupakan papan catur itu sendiri.

//     int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2}; // Mendefinisikan array dx yang berisi perubahan posisi horizontal yang mungkin dilakukan oleh bidak kuda.
//     int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1}; // Mendefinisikan array dy yang berisi perubahan posisi vertikal yang mungkin dilakukan oleh bidak kuda.

//     for (int k = 0; k < 8; k++) { // Looping sebanyak 8 kali, sesuai dengan jumlah kemungkinan gerakan bidak kuda.
//         int ni = i + dx[k], nj = j + dy[k]; // Menghitung posisi baru bidak kuda setelah melakukan gerakan ke-k.
//         if (ni >= 0 && ni < size && nj >= 0 && nj < size) { // Mengecek apakah posisi baru tersebut masih berada di dalam papan catur.
//             chessBoard[ni][nj] = 1; // Jika ya, tandai posisi tersebut dengan 1 di papan catur.
//         }
//     }
// }

// int main() { // Mendefinisikan fungsi utama program.
//     int i, j; // Mendefinisikan dua variabel integer i dan j.
//     scanf("%d %d", &i, &j); // Membaca dua nilai dari input pengguna dan menyimpannya ke dalam variabel i dan j.

//     int size = 8; // Mendefinisikan variabel size dan mengisinya dengan 8, yang merupakan ukuran papan catur.
//     int chessBoard[8][8] = {0}; // Mendefinisikan array 2D chessBoard berukuran 8x8 dan mengisinya dengan 0.

//     koboImaginaryChess(i, j, size, chessBoard); // Memanggil fungsi koboImaginaryChess dengan parameter i, j, size, dan chessBoard.

//     for (int i = 0; i < size; i++) { // Looping sebanyak size kali.
//         for (int j = 0; j < size; j++) { // Untuk setiap i, lakukan looping sebanyak size kali.
//             printf("%d ", chessBoard[i][j]); // Cetak nilai di posisi i, j dari papan catur
//         }
//         printf("\n"); // Cetak baris baru setelah setiap baris papan catur.
//     }

//     return 0; // Mengakhiri program dan mengembalikan nilai 0.
// }



// Bidak kuda dalam catur memiliki gerakan yang unik, yaitu bergerak dalam bentuk L. Dalam satu langkah, bidak kuda dapat bergerak dua kotak secara horizontal dan satu kotak secara vertikal, atau dua kotak secara vertikal dan satu kotak secara horizontal.

// -2 dan 2 merepresentasikan pergerakan dua kotak ke kiri atau ke kanan.
// -1 dan 1 merepresentasikan pergerakan satu kotak ke kiri atau ke kanan.