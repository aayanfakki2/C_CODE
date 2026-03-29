#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Function prototypes for matrix operations
void input_matrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void display_matrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void add_matrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols);
void find_saddle_point(int matrix[MAX_SIZE][MAX_SIZE], int n);
void check_magic_square(int matrix[MAX_SIZE][MAX_SIZE], int n);
void inverse_matrix_3x3(int matrix[3][3]);

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int r1, c1, r2, c2, choice;

    printf("Enter dimensions of Matrix 1 (rows cols): ");
    scanf("%d %d", &r1, &c1);
    input_matrix(mat1, r1, c1);

    printf("Enter dimensions of Matrix 2 (rows cols): ");
    scanf("%d %d", &r2, &c2);
    input_matrix(mat2, r2, c2);

    while(1) {
        printf("\n1.Add, 2.Saddle Point(M1), 3.Inverse(M1-3x3), 4.Magic Square(M1), 5.Exit: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (r1 == r2 && c1 == c2) {
                    add_matrices(mat1, mat2, result, r1, c1); //
                    display_matrix(result, r1, c1);
                } else printf("Incompatible dimensions.\n"); //
                break;
            case 2:
                if (r1 == c1) find_saddle_point(mat1, r1); //
                else printf("Square matrix required.\n");
                break;
            case 3:
                if (r1 == 3 && c1 == 3) inverse_matrix_3x3(mat1); //
                else printf("Only for 3x3 matrices.\n");
                break;
            case 4:
                if (r1 == c1) check_magic_square(mat1, r1); //
                else printf("Square matrix required.\n");
                break;
            case 5: return 0;
        }
    }
}
// Implementations for input, display, addition, saddle, magic, and inverse (3x3) follow...
