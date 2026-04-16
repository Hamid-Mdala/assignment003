#include <stdio.h>

int main() {
    int i, j;

    const int ROW = 3;
    const int COL = 4;

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf(">>>*(arr[i] + j)<<<\n");

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", *(arr[i] + j));
        }
        printf("\n");
    }

    printf("\n>>>arr[i][j]<<<\n");

    for (i=0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}