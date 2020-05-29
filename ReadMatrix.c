#include <stdio.h>

#define FILE_PATH  "/home/pi/CIATEQ/CompilersAndLibraries/testFilePositives.dat"

int readmatrix(size_t rows, size_t cols, float (*a)[cols], const char* filename)
{

    FILE *pf;
    pf = fopen (filename, "r");
    if (pf == NULL)
        return 0;

    fscanf(pf, "%f", a[0]);  //dummy read  number of rows
    fscanf(pf, "%f", a[0]);  //dummy read  number of columns

    for(size_t i = 0; i < rows; ++i)
    {
        for(size_t j = 0; j < cols; ++j)
            fscanf(pf, "%f", a[i] + j);            
    }


    fclose (pf); 
    return 1; 
}

int main(void)
{
    float matrix[3][3];

    readmatrix(3, 3, matrix, FILE_PATH);

    for(size_t i = 0; i < 3; ++i)
    {
        for(size_t j = 0; j < 3; ++j)
            //printf("%-3f ", matrix[i][j]);
            printf("%-3f ", (matrix[i][j]) * (matrix[i][j]) );
        puts("");
    }

    return 0;
}