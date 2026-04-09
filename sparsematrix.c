#include <stdio.h>

int main() {
    int matrix[10][10], i, j, rows, cols, count = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] != 0) {
                count++;
            }
        }
    }

    printf("\nSparse Matrix (Triplet Form):\n");
    printf("Row Col Value\n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] != 0) {
                printf("%d   %d   %d\n", i, j, matrix[i][j]);
            }
        }
    }

    return 0;
}