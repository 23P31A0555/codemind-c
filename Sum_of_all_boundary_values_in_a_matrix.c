#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    
    if (rows <= 0 || cols <= 0) {
       
        return 1;
    }

    int matrix[rows][cols];

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of boundary values
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }

    // Output the result
    printf("%d
", sum);

    return 0;
}


