#include "Std2DArrays.h"

void fillArray(int** array, int rows, int cols) {
    int num = 1;

    for (int col = 0; col < cols; ++col) {
        if (col % 2 == 0) {
            for (int row = 0; row < rows; ++row) {
                array[row][col] = num++;
            }
        } else {
            for (int row = rows - 1; row >= 0; --row) {
                array[row][col] = num++;
            }
        }
    }
}
