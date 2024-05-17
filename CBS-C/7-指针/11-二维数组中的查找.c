#include <stdio.h>
#include <stdbool.h>
/*
 * 输入 **matrix 是长度为 matrixSize 的数组指针的数组，其中每个元素（也是一个数组）
 * 的长度组成 *matrixColSize 数组作为另一输入，*matrixColSize 数组的长度也为 matrixSize
 */
bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target){
    if (matrixSize == 0 || *matrixColSize == 0) return false;   //空数组直接返回false
    int x = *matrixColSize - 1, y = 0;
    while (x >= 0 && y < matrixSize) {
        if(*(*(matrix + y) + x) > target) x--;  //指针表示法
        else if (matrix[y][x] < target) y++;
        else return true;
    }
    return false;
}